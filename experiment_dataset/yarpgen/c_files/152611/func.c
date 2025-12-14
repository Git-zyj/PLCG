/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152611
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
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_6 [i_1] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (short)0)) ? (9976492787461540392ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25448)))));
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) var_18))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)99)) ? (((/* implicit */unsigned long long int) (~((~(var_5)))))) : ((((_Bool)1) ? (((((/* implicit */_Bool) 3985379818668901141ULL)) ? (((/* implicit */unsigned long long int) arr_5 [i_1])) : (19ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((14461364255040650474ULL) == (3985379818668901153ULL)))))))));
                            var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7ULL)) ? (((/* implicit */int) ((2650528150U) >= (2650528151U)))) : ((-(((/* implicit */int) var_3))))))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) 5135456756191341586ULL)) ? (7ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16384)))))) ? (((((/* implicit */_Bool) 14461364255040650489ULL)) ? (3985379818668901141ULL) : (14461364255040650504ULL))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) var_16)) : (3985379818668901127ULL)))))));
                            var_22 += ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) -9223372036854775803LL)) ? (305463621U) : (var_12)))))) / (((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) -1LL)) ? (14461364255040650474ULL) : (((/* implicit */unsigned long long int) 9223372036854775807LL)))) : (((/* implicit */unsigned long long int) ((int) (short)0))))))))));
                            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (~(((min((((/* implicit */long long int) 29360128)), (-1LL))) * (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) / (1544141301U)))))))))));
                        }
                    }
                    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        var_25 += ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)16391)) | (var_1)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -1LL)) ? (arr_14 [8LL] [i_1] [i_1]) : (((/* implicit */int) arr_2 [i_0] [i_1]))))) : (((((/* implicit */_Bool) (short)28824)) ? (((/* implicit */long long int) -311484463)) : (0LL)))))) : (((((/* implicit */unsigned long long int) arr_4 [i_0])) & (arr_10 [i_2 - 3] [i_2] [i_2 - 1])))));
                        arr_15 [i_0] [8LL] [i_1] [i_5] [i_0] = ((/* implicit */_Bool) min((3985379818668901127ULL), (((/* implicit */unsigned long long int) ((14461364255040650504ULL) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [(unsigned short)11] [i_1] [i_2 + 1] [i_2] [i_2 - 2])) ? (((/* implicit */int) (unsigned char)255)) : (arr_14 [i_5] [i_1] [i_1])))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 3) 
                    {
                        var_26 = ((/* implicit */long long int) ((signed char) arr_2 [i_0] [i_2 - 1]));
                        var_27 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_5)) : (3985379818668901127ULL)))) ? (((/* implicit */long long int) 311484463)) : (((long long int) 13ULL))));
                    }
                    arr_19 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -311484463)))))) : (((unsigned int) arr_9 [i_2 - 2] [i_2 - 3] [i_2 - 3] [i_2 - 3] [i_2 + 1] [i_2 - 3]))));
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 11; i_7 += 4) 
                    {
                        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned long long int) 2650528150U)) : (11ULL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 3985379818668901112ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32767))))) : (((arr_9 [i_0] [i_1] [i_1] [i_2] [i_1] [(_Bool)1]) | (((/* implicit */long long int) -1))))))) ? (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) / ((-(arr_4 [i_1]))))) : (((/* implicit */int) (short)32767))));
                                var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_1] [i_8 + 1])) ? (arr_22 [i_1] [i_8 + 1]) : (((/* implicit */unsigned long long int) arr_0 [i_7 - 1] [9U]))))) ? (((((/* implicit */_Bool) arr_22 [i_1] [i_8 + 1])) ? (var_15) : (((/* implicit */unsigned long long int) var_5)))) : (((((/* implicit */_Bool) arr_0 [i_7 - 1] [i_1])) ? (((/* implicit */unsigned long long int) var_5)) : (3985379818668901112ULL)))));
                                arr_25 [i_0] [11ULL] [i_2] [i_8] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(17193734978542698488ULL)))) ? (((((/* implicit */_Bool) var_1)) ? (-311484466) : (arr_0 [i_0] [(_Bool)1]))) : (((/* implicit */int) (unsigned short)65534))))) ? (((/* implicit */int) (signed char)41)) : (((/* implicit */int) ((((arr_18 [i_1] [i_1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)42))))) < ((~(arr_8 [i_0] [i_1] [(unsigned short)3] [i_7 - 1] [i_8]))))))));
                                var_30 = ((/* implicit */int) (unsigned short)1);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) max((((((/* implicit */_Bool) (~(0U)))) ? (((2650528150U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65534))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3777138922U)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_10))))))), (((((/* implicit */_Bool) var_13)) ? (var_9) : (var_8))))))));
    var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((((((/* implicit */_Bool) 1644439146U)) || ((_Bool)1))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (5054876693847595168LL) : (((/* implicit */long long int) 3777138922U))))) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (16765763428581057411ULL) : (((/* implicit */unsigned long long int) 9223372036854775807LL)))))) : (((/* implicit */unsigned long long int) 5054876693847595168LL))));
}
