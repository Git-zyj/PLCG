/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132169
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) (unsigned short)51359)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) ((unsigned short) var_5))) : (((/* implicit */int) ((((/* implicit */long long int) arr_4 [i_1 - 1] [i_1 + 1])) <= (var_13))))));
                            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49334))) : (8442924982199879833LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-109)) ? (-821465768433454796LL) : (-8442924982199879826LL)))) : ((~(8358939303614343137ULL)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    for (long long int i_5 = 1; i_5 < 20; i_5 += 2) 
                    {
                        {
                            var_18 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_15)) << (((((/* implicit */int) (unsigned char)139)) - (131)))))) ? (((/* implicit */int) ((unsigned short) var_4))) : (((/* implicit */int) (!(arr_8 [i_5 + 1] [i_1 + 1] [i_5] [i_5 - 1] [(signed char)7]))))));
                            arr_15 [i_4] [i_1] [i_4] [i_5] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) -1519102373)))))))) % (((((/* implicit */_Bool) ((arr_0 [i_1] [10ULL]) | (var_5)))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) (signed char)0)) ? (-3967808316766354698LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_2 [i_1 - 1] [i_1 - 1] [i_1 + 1])))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (8442924982199879817LL))))) : ((+((-(((/* implicit */int) (signed char)70))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_6 = 0; i_6 < 10; i_6 += 3) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 1) 
            {
                {
                    arr_26 [i_8] [i_7] [i_8] [i_8] = ((/* implicit */long long int) ((((((/* implicit */long long int) (~(((/* implicit */int) var_8))))) <= (((((/* implicit */_Bool) arr_11 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_2))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((3967808316766354697LL) >= (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_6] [i_7] [i_8] [i_6]))))))) - ((+(var_5))))) : (((((/* implicit */_Bool) arr_14 [(_Bool)1] [i_7] [i_8] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_6] [i_7] [i_6] [i_7]))) : (10775617913587525728ULL)))));
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 2; i_9 < 6; i_9 += 3) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 10; i_10 += 4) 
                        {
                            {
                                var_20 *= ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned short) 852621824)));
                                var_21 = (!(((/* implicit */_Bool) (-(((/* implicit */int) var_12))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (long long int i_11 = 0; i_11 < 10; i_11 += 2) 
                    {
                        var_22 = (~((((+(((/* implicit */int) var_12)))) & (((/* implicit */int) ((unsigned char) var_7))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_12 = 3; i_12 < 8; i_12 += 4) /* same iter space */
                        {
                            var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(-1527676014))))));
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) -852621825)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32973))) : (-3967808316766354698LL)));
                        }
                        for (unsigned long long int i_13 = 3; i_13 < 8; i_13 += 4) /* same iter space */
                        {
                            arr_42 [i_8] [9] [i_8] [(signed char)2] = ((/* implicit */long long int) ((((((/* implicit */int) var_10)) == (((/* implicit */int) arr_14 [i_13] [i_13] [i_13 - 1] [i_13 - 3])))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) 8442924982199879833LL)) : (arr_25 [i_6] [i_6] [i_8]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)43735)) && (((/* implicit */_Bool) (signed char)-110))))))));
                            var_25 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((arr_36 [i_6] [i_13 + 1] [i_8] [i_11] [i_11]) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)2))) == (-4817664925900998541LL)))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_34 [(unsigned char)2] [i_6] [i_6]))))))) % (((unsigned long long int) ((((/* implicit */_Bool) 281474976710655LL)) ? (arr_3 [(_Bool)1] [(_Bool)1]) : (((/* implicit */int) arr_29 [i_6] [i_7] [i_8])))))));
                            arr_43 [i_6] [i_6] [i_8] [(short)1] [i_6] = ((/* implicit */short) (((-(((/* implicit */int) var_9)))) != (((((/* implicit */_Bool) 3967808316766354697LL)) ? (((/* implicit */int) (signed char)-10)) : (((/* implicit */int) var_9))))));
                            var_26 ^= ((/* implicit */signed char) (+((~(((/* implicit */int) ((((/* implicit */int) var_8)) >= (-667897110))))))));
                        }
                        for (unsigned long long int i_14 = 3; i_14 < 8; i_14 += 4) /* same iter space */
                        {
                            var_27 = ((/* implicit */long long int) ((unsigned long long int) (-(((/* implicit */int) arr_45 [i_14 + 1] [i_14 - 3] [i_14 - 2] [i_14 + 2] [i_14])))));
                            arr_48 [i_6] [i_6] [i_8] [i_8] [(signed char)6] = ((/* implicit */short) (~((-(((/* implicit */int) ((unsigned short) var_9)))))));
                            var_28 *= ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                            arr_49 [i_6] [i_7] [i_8] [i_8] [i_11] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_39 [i_14] [i_14 - 2] [(unsigned char)5] [i_14 + 2] [i_14 - 2] [(_Bool)1] [i_14]))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57344))) : (8442924982199879830LL))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_39 [0] [i_14 - 2] [i_14] [0U] [i_14 - 2] [i_14 - 2] [i_14])))))));
                        }
                    }
                    for (long long int i_15 = 0; i_15 < 10; i_15 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                        {
                            var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) ((((/* implicit */_Bool) (~(-1156054220)))) ? (((((/* implicit */_Bool) -1529656222)) ? (8586595534259659753ULL) : (((/* implicit */unsigned long long int) 3967808316766354701LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((15773767831167028504ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47118))) == (10775617913587525720ULL)))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)18)) || (((/* implicit */_Bool) arr_25 [i_6] [i_6] [i_15])))))))))))));
                            arr_55 [(unsigned char)2] [(unsigned short)2] [i_6] [i_15] [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)16383)))))));
                        }
                        for (unsigned int i_17 = 0; i_17 < 10; i_17 += 2) 
                        {
                            var_30 = ((/* implicit */unsigned short) (-(((int) -8442924982199879826LL))));
                            var_31 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) (unsigned char)61)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_47 [i_17] [1U] [i_8] [i_8] [i_6] [i_6] [4]))));
                            var_32 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_7] [i_7] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_7] [i_8] [i_7] [i_17]))) : (var_2)))) ? (var_14) : (((/* implicit */int) (unsigned short)53503)))))));
                            var_33 = ((/* implicit */long long int) (~(((int) ((-4817664925900998572LL) == (var_2))))));
                            arr_58 [i_17] [i_7] [i_8] &= ((/* implicit */unsigned char) ((long long int) (!(var_11))));
                        }
                        var_34 *= ((signed char) -3967808316766354677LL);
                        var_35 = ((/* implicit */unsigned long long int) min((var_35), (((((/* implicit */_Bool) (-(-3967808316766354706LL)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (signed char)-23)) : (((/* implicit */int) arr_34 [i_8] [6ULL] [i_8]))))) + (((unsigned long long int) -3967808316766354691LL))))))));
                    }
                    arr_59 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */int) (+(((((/* implicit */_Bool) (signed char)-1)) ? (1738592188650439961LL) : (((/* implicit */long long int) 424584662))))));
                }
            } 
        } 
    } 
    var_36 *= ((/* implicit */int) var_4);
}
