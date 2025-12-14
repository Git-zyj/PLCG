/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105968
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
    var_20 = ((/* implicit */unsigned short) var_5);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (~(((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (0U))))))));
                        var_22 = ((/* implicit */_Bool) arr_10 [3LL] [i_1] [i_1] [i_3]);
                    }
                    var_23 = ((/* implicit */long long int) var_5);
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) 
                    {
                        arr_14 [(unsigned short)3] [i_4] [i_2] [(_Bool)1] [i_4] [i_0] = ((/* implicit */unsigned int) arr_10 [i_0] [10ULL] [i_2] [i_4]);
                        var_24 = ((/* implicit */long long int) (unsigned short)65527);
                    }
                    for (unsigned short i_5 = 1; i_5 < 8; i_5 += 1) 
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            var_25 &= ((/* implicit */_Bool) (-(-4000895908186591297LL)));
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) == (((/* implicit */int) var_17))));
                            arr_22 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */long long int) var_12)) / (var_3))));
                        }
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            arr_26 [i_7 - 1] [i_7 - 1] = ((/* implicit */unsigned short) (+(arr_3 [i_1])));
                            var_26 = ((/* implicit */_Bool) ((max((((/* implicit */long long int) (_Bool)1)), (-4000895908186591297LL))) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33129)))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 11; i_8 += 4) 
                        {
                            var_27 = ((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)33125)), (max((arr_28 [i_5 + 3] [i_0] [i_5 + 2] [i_5 - 1] [i_0]), (arr_28 [i_5 + 1] [i_1] [i_1] [(_Bool)1] [(_Bool)1])))));
                            arr_29 [i_0] [6U] [i_1] [i_5 - 1] [i_8] = ((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_24 [7U] [i_1] [i_2] [i_1] [i_8] [7U]), (4294967289U)))) ? (1048575ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3939476383685136179LL)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))))))));
                            var_28 = ((((/* implicit */_Bool) 17370430778455087007ULL)) ? (771033140U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
                            var_29 = (!(((_Bool) arr_18 [i_1])));
                            var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((max((var_11), (var_11))) ? (-4000895908186591298LL) : (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0] [(_Bool)1] [i_0])) >> (((((/* implicit */int) arr_12 [i_8] [i_1] [i_8] [6ULL] [i_8])) - (41285))))))))) ? ((((!(arr_16 [i_8] [i_5] [i_0]))) ? (((/* implicit */unsigned long long int) -3939476383685136198LL)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32407))) | (var_1))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7)))), (((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (arr_2 [i_0] [i_1] [5LL])))))))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 11; i_9 += 4) 
                        {
                            var_31 = ((/* implicit */_Bool) var_13);
                            var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) 3118723683U))))))));
                            var_33 = ((/* implicit */_Bool) ((unsigned int) arr_18 [i_1]));
                            arr_34 [i_0] [4U] [4U] [i_5] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) max(((_Bool)1), ((_Bool)1)))), (min(((~(6180797164012909974LL))), (((/* implicit */long long int) (unsigned short)32413))))));
                        }
                        arr_35 [i_0] [i_0] [i_0] [i_2] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_32 [i_0] [i_1] [i_0] [i_0] [i_5 + 1] [i_2]) || (((/* implicit */_Bool) 17370430778455087022ULL))))) != ((+(((/* implicit */int) arr_11 [i_0] [i_5 + 2] [i_2] [i_5 + 2] [i_5 - 1] [i_5]))))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_34 = ((((/* implicit */_Bool) var_18)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_13 [3ULL] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_16))))) : (arr_23 [i_1] [i_1] [i_1] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 17370430778455087007ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (1076313295254464594ULL)))))))));
                        var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */unsigned long long int) var_3)) ^ (var_1))) : (min((((var_14) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_10] [i_2] [i_2] [i_10]))))));
                    }
                    for (unsigned int i_11 = 0; i_11 < 11; i_11 += 1) 
                    {
                        arr_40 [i_0] [i_0] [4LL] [i_2] [(_Bool)1] = ((long long int) ((((/* implicit */_Bool) arr_17 [i_0])) || (((/* implicit */_Bool) arr_17 [i_11]))));
                        arr_41 [i_0] [i_0] [(_Bool)1] [i_2] [9ULL] = arr_1 [i_1] [i_2];
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
    {
        arr_46 [i_12] = ((/* implicit */unsigned long long int) var_8);
        arr_47 [(unsigned short)8] = ((/* implicit */_Bool) (((_Bool)1) ? (1076313295254464587ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65534)))));
        var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_3), (arr_27 [i_12] [i_12] [i_12] [(_Bool)1] [i_12 + 1])))) ? (min((arr_27 [i_12] [i_12] [i_12] [i_12] [i_12 + 1]), (arr_27 [i_12 + 1] [2U] [2U] [i_12] [i_12 + 1]))) : (((var_9) ? (arr_27 [i_12 + 1] [i_12 + 1] [i_12] [i_12 + 1] [i_12 + 1]) : (arr_27 [i_12] [i_12] [i_12] [i_12] [i_12 + 1])))));
    }
    var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (min((((/* implicit */unsigned int) ((var_10) && ((_Bool)1)))), (var_8)))));
}
