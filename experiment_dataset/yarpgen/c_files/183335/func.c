/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183335
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        arr_3 [4] = ((/* implicit */int) ((((/* implicit */_Bool) (-((+(var_11)))))) ? (((((/* implicit */long long int) (+(var_5)))) + (var_9))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
        arr_4 [0U] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))));
        arr_5 [i_0] = ((/* implicit */int) min(((~(var_9))), (((/* implicit */long long int) max(((+(var_7))), (((/* implicit */unsigned int) (+(var_5)))))))));
    }
    for (int i_1 = 2; i_1 < 21; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((min((((/* implicit */int) var_8)), (var_4))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_3 = 1; i_3 < 20; i_3 += 4) 
            {
                arr_13 [11U] [11U] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (~(10U)))) ? (var_3) : ((~(var_5))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                arr_14 [i_1] [i_1] = min((((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_11)))), (((((/* implicit */unsigned int) var_2)) >= (min((((/* implicit */unsigned int) (unsigned char)210)), (4294967283U))))));
            }
            /* LoopNest 2 */
            for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                for (unsigned int i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    {
                        arr_19 [i_4] [i_4] = min((((((/* implicit */_Bool) (unsigned short)57996)) || (((/* implicit */_Bool) 3312271017U)))), ((!(((/* implicit */_Bool) min((var_5), (var_10)))))));
                        arr_20 [i_1] [i_5] [i_4] [i_1] [i_2] = ((/* implicit */int) min((max((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_2)))), ((!(((/* implicit */_Bool) var_3)))))), (((((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */unsigned int) var_5)))) >= (((/* implicit */unsigned int) max((((/* implicit */int) var_8)), (var_2))))))));
                        /* LoopSeq 4 */
                        for (int i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            arr_24 [i_5] [14U] = ((/* implicit */int) max((min(((((_Bool)1) ? (-824159956953426413LL) : (((/* implicit */long long int) -1696541764)))), (((/* implicit */long long int) ((var_7) * (var_6)))))), (((/* implicit */long long int) ((((var_10) & (((/* implicit */int) var_8)))) | (((((/* implicit */_Bool) var_1)) ? (var_2) : (var_2))))))));
                            arr_25 [4] [i_4] [i_4] [i_4] [i_1] = ((/* implicit */unsigned int) max((((min((var_4), (var_3))) % (max((var_2), (var_10))))), ((-(((var_10) / (var_4)))))));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 22; i_7 += 1) 
                        {
                            arr_28 [i_5] [15] [i_5] [15ULL] [i_2] [i_1] [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))));
                            arr_29 [(unsigned char)10] [i_5] [i_4] [i_5] [i_1] = ((((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_4))))) * ((+(((/* implicit */int) var_8)))));
                        }
                        for (unsigned int i_8 = 2; i_8 < 20; i_8 += 4) 
                        {
                            arr_33 [i_1] [i_1] [i_1 - 2] [11U] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */int) var_8))));
                            arr_34 [i_1] [i_5] [i_1] [i_1] [i_8] = min((((/* implicit */unsigned int) var_8)), (((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_3)))) ? (min((var_11), (((/* implicit */unsigned int) var_10)))) : (((((/* implicit */unsigned int) var_5)) % (var_0))))));
                        }
                        for (int i_9 = 0; i_9 < 22; i_9 += 2) 
                        {
                            arr_37 [i_1] [i_1] [i_5] [i_1 - 2] = ((/* implicit */int) (~((~(((((/* implicit */_Bool) 3877966053254317368LL)) ? (((/* implicit */unsigned int) -606418734)) : (3179011199U)))))));
                            arr_38 [i_9] [i_5] [i_5] [i_2] [7] = var_0;
                            arr_39 [i_5] [i_2] [i_5] [i_2] [i_2] [i_2] [i_5] = ((/* implicit */unsigned short) (+(((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) var_10)) : (var_11))) * (var_6)))));
                            arr_40 [i_5] [i_5] [7] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_3)))) ? (max((var_9), (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) (+(var_4))))))), (min(((-(766556756036311790ULL))), (((/* implicit */unsigned long long int) ((var_9) - (var_9))))))));
                        }
                    }
                } 
            } 
            arr_41 [i_2] [i_1] [12] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))));
            arr_42 [i_1] [i_2] = min((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))), ((+(var_10))));
        }
        /* vectorizable */
        for (unsigned char i_10 = 3; i_10 < 20; i_10 += 1) 
        {
            arr_47 [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) (+(var_5)));
            arr_48 [i_10] = ((/* implicit */int) (+(var_11)));
            arr_49 [i_10] [i_10] = ((/* implicit */_Bool) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_1))) ^ (var_11)))));
            /* LoopSeq 1 */
            for (int i_11 = 0; i_11 < 22; i_11 += 1) 
            {
                arr_52 [i_1] [i_10] [i_10] [i_1] |= ((/* implicit */unsigned int) ((var_5) >= (((var_4) / (var_4)))));
                arr_53 [5] [i_10] [i_11] = ((((/* implicit */_Bool) (~(var_4)))) ? ((+(var_2))) : (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_9))))));
                arr_54 [i_10] [i_10] = ((((/* implicit */_Bool) ((var_0) / (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) || (((/* implicit */_Bool) var_10)));
            }
        }
        for (unsigned char i_12 = 4; i_12 < 21; i_12 += 2) 
        {
            arr_57 [i_1] = max((((/* implicit */long long int) var_0)), (((((((/* implicit */long long int) 699391113U)) / (var_9))) / (((/* implicit */long long int) ((var_6) * (((/* implicit */unsigned int) var_4))))))));
            arr_58 [i_1] = ((/* implicit */unsigned short) (((~(var_5))) | (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_2) >= (var_4))))) >= (min((var_11), (((/* implicit */unsigned int) var_3)))))))));
            /* LoopNest 2 */
            for (unsigned char i_13 = 0; i_13 < 22; i_13 += 4) 
            {
                for (unsigned char i_14 = 2; i_14 < 19; i_14 += 4) 
                {
                    {
                        arr_65 [i_1] = ((/* implicit */int) (-((-((-(var_9)))))));
                        arr_66 [i_1] [i_12] [i_12] [i_14] [i_14] = ((/* implicit */int) max((min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)63654)) * (((/* implicit */int) (unsigned char)143))))), ((-(var_9))))), (((/* implicit */long long int) (((!(((/* implicit */_Bool) var_6)))) || ((!(((/* implicit */_Bool) var_3)))))))));
                    }
                } 
            } 
        }
        arr_67 [i_1 - 2] = ((/* implicit */int) (!(((/* implicit */_Bool) min((max((var_9), (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) && (var_8)))))))));
        arr_68 [i_1 + 1] = min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) var_3)) : (var_6))), (var_11));
    }
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((-(var_9)))))) || (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_6))))))))));
    var_13 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(var_7))))));
    var_14 = ((/* implicit */int) var_9);
}
