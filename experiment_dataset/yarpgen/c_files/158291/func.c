/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158291
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 *= ((/* implicit */long long int) (-(((/* implicit */int) min(((_Bool)1), (max((arr_7 [i_0] [i_1 + 2] [i_1 + 2]), ((_Bool)1))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 2; i_3 < 18; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */signed char) 1275942585);
                        var_18 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1275942581)) ? (((/* implicit */int) arr_9 [(signed char)2] [i_3 - 1] [i_3 + 1])) : (((/* implicit */int) arr_9 [18ULL] [i_3 + 2] [i_3 + 2]))))) ? (((/* implicit */unsigned int) 1275942580)) : (((arr_5 [i_0] [(short)6] [i_1 + 1] [i_1]) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                        var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((((/* implicit */int) (unsigned short)23695)) + (((/* implicit */int) (unsigned char)42))))))) >= (max((((/* implicit */unsigned long long int) min(((_Bool)1), ((_Bool)1)))), (min((12385874294623330010ULL), (((/* implicit */unsigned long long int) (_Bool)0))))))));
                        var_20 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (18210574011867574069ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))), (((/* implicit */unsigned long long int) (+(((unsigned int) (_Bool)1)))))));
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 1; i_5 < 17; i_5 += 4) 
                        {
                            var_21 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [(short)6] [(_Bool)1] [(_Bool)1])) ? (((/* implicit */int) arr_9 [12ULL] [i_1 + 2] [i_1 + 2])) : (((/* implicit */int) arr_9 [(_Bool)1] [i_1 - 1] [i_2]))))) ? (83897850U) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_9 [6] [6] [i_2]))))));
                            arr_16 [i_0] [i_1 + 2] [14LL] [i_4] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)61)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (7486471711748446779LL)));
                            arr_17 [i_0] = ((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned short)43139)) & (((/* implicit */int) (_Bool)1))))));
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_0))) != (arr_5 [(unsigned short)16] [i_0] [i_0] [i_0]))) ? (-511158448) : (((/* implicit */int) arr_15 [i_4] [i_5] [(unsigned short)4] [i_4 + 1] [i_4] [i_4] [i_4]))))) ? (((arr_0 [i_1 + 1]) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(_Bool)1]))) : (var_12))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -311644016)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_0))))))) : (((/* implicit */unsigned long long int) -1275942581))));
                            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (~(((unsigned int) (signed char)-61)))))));
                        }
                        /* vectorizable */
                        for (signed char i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            var_24 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)16))));
                            var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1275942594)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32744))) : (9223372036854775799LL))))));
                        }
                        var_26 = ((/* implicit */unsigned short) (~((~((+(((/* implicit */int) (unsigned short)64169))))))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 20; i_7 += 1) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_8 = 0; i_8 < 20; i_8 += 1) 
                        {
                            var_27 = ((/* implicit */long long int) (+(arr_5 [i_0] [i_0] [i_0] [i_8])));
                            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((/* implicit */_Bool) (~(4294967295U)))) ? (890591072) : (((/* implicit */int) (signed char)-105)))))));
                            var_29 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [(short)4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)61020)) == (((/* implicit */int) (short)19382)))))) : (((((/* implicit */_Bool) -6323880690295084428LL)) ? (((/* implicit */unsigned long long int) var_13)) : (10158436497940666177ULL)))));
                        }
                        /* vectorizable */
                        for (unsigned char i_9 = 0; i_9 < 20; i_9 += 2) 
                        {
                            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)43126))))) ? (((/* implicit */unsigned long long int) (+(-1275942581)))) : (9007199254740991ULL)));
                            arr_29 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_2 [i_0]))));
                        }
                        var_31 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) & (min((18434745280717345692ULL), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0] [i_0]))))));
                        var_32 = ((/* implicit */short) (!(arr_4 [i_0] [i_0])));
                        /* LoopSeq 3 */
                        for (short i_10 = 1; i_10 < 18; i_10 += 1) 
                        {
                            var_33 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)39094)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (_Bool)1))))) ? ((-(18437736874454810625ULL))) : (((unsigned long long int) (signed char)-29))))));
                            arr_32 [i_0] [(signed char)14] = ((/* implicit */unsigned short) (unsigned char)30);
                            var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (unsigned char)75)) : (((/* implicit */int) arr_20 [i_0] [i_1 + 1] [i_7] [i_10 - 1]))))) ? (arr_12 [(short)5] [i_1] [i_2] [i_7] [i_10] [i_7]) : (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-24)))))));
                            var_35 = (i_0 % 2 == zero) ? (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_0] [i_0])) << (((arr_30 [i_0]) - (16556579018372702175ULL))))))))) : (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_0] [i_0])) << (((((arr_30 [i_0]) - (16556579018372702175ULL))) - (15682836315204368585ULL)))))))));
                            var_36 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_1 + 1] [i_1]))))), (7151095454278696111ULL)));
                        }
                        for (signed char i_11 = 0; i_11 < 20; i_11 += 2) 
                        {
                            var_37 = arr_6 [i_0] [i_0] [i_0];
                            var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) (signed char)-33))));
                        }
                        for (int i_12 = 1; i_12 < 17; i_12 += 2) 
                        {
                            var_39 = ((/* implicit */signed char) (~(min((((/* implicit */unsigned long long int) arr_1 [i_12 + 1] [i_12 + 2])), (12333080755355090378ULL)))));
                            arr_39 [i_0] [(unsigned short)1] [10LL] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) (short)-20360))))), (((arr_13 [i_0] [i_0] [i_0] [i_1 + 1] [i_7]) ? (((/* implicit */int) (short)10057)) : (((/* implicit */int) (short)-12040))))));
                            arr_40 [(_Bool)1] [i_1] [(short)1] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (min((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))), ((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-12040))) : (4294967288U))))) : (((/* implicit */unsigned int) 497157511))));
                            var_40 = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (signed char)-43)))), (((((/* implicit */_Bool) (short)20359)) ? (((/* implicit */int) arr_33 [i_1] [i_1] [(_Bool)1] [i_1] [i_1 + 1])) : (((/* implicit */int) (short)-1))))));
                        }
                        var_41 = (~(((/* implicit */int) (unsigned short)2879)));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 2) 
                    {
                        var_42 = ((/* implicit */signed char) (+(((/* implicit */int) (short)-20359))));
                        var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_5 [i_1 + 1] [i_0] [i_0] [i_13]))) ? (max((((/* implicit */long long int) (signed char)1)), (1621468818408959833LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1 + 2])))));
                        var_44 = ((/* implicit */unsigned char) min(((~(((/* implicit */int) arr_18 [i_1 + 1] [i_0])))), (((/* implicit */int) (unsigned short)16384))));
                        var_45 = ((/* implicit */_Bool) (unsigned short)25255);
                    }
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_14 = 0; i_14 < 11; i_14 += 4) 
    {
        for (signed char i_15 = 3; i_15 < 10; i_15 += 4) 
        {
            for (unsigned short i_16 = 0; i_16 < 11; i_16 += 2) 
            {
                {
                    arr_50 [i_14] [i_15 - 2] [(unsigned short)6] = ((/* implicit */_Bool) max(((+(((/* implicit */int) (unsigned short)43143)))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-20363)), (arr_1 [i_16] [i_15])))) ? (((/* implicit */int) arr_9 [i_16] [i_15] [i_16])) : (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)49147))))))));
                    var_46 = ((/* implicit */unsigned short) ((((/* implicit */int) max(((unsigned short)25641), (((/* implicit */unsigned short) arr_4 [i_14] [(unsigned short)16]))))) - (((((/* implicit */_Bool) (signed char)42)) ? (((/* implicit */int) arr_4 [i_14] [i_14])) : (706036294)))));
                }
            } 
        } 
    } 
    var_47 &= ((/* implicit */long long int) (+((+(var_13)))));
    /* LoopSeq 1 */
    for (int i_17 = 1; i_17 < 17; i_17 += 2) 
    {
        var_48 = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((-(var_4))), (((((/* implicit */_Bool) -1621468818408959814LL)) ? (((/* implicit */int) arr_13 [i_17 + 1] [i_17 + 1] [i_17] [(signed char)9] [i_17])) : (((/* implicit */int) arr_0 [i_17 + 1]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-1)) < (((/* implicit */int) arr_36 [i_17 - 1] [i_17 + 2] [5])))))) : ((~((~(18446744073709551615ULL)))))));
        var_49 = ((/* implicit */unsigned short) (+(min((((/* implicit */long long int) (signed char)1)), (min((var_3), (((/* implicit */long long int) (signed char)(-127 - 1)))))))));
        var_50 = ((/* implicit */short) (signed char)65);
    }
    var_51 = ((/* implicit */unsigned short) ((_Bool) (!(((/* implicit */_Bool) (signed char)120)))));
}
