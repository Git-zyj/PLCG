/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105602
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
    var_13 = ((/* implicit */unsigned short) (~((~(var_7)))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_4 [11LL] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) var_12))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            arr_8 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_1])) ? (-5011165645769521815LL) : (((/* implicit */long long int) var_7))));
            arr_9 [i_0] [i_0] |= (~(var_1));
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    {
                        arr_16 [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_1);
                        arr_17 [i_0] [i_1] [9ULL] [i_1] [i_3] [i_3] = ((/* implicit */short) arr_11 [i_0] [i_1] [i_1]);
                        arr_18 [i_3] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(5011165645769521803LL)))) && (((/* implicit */_Bool) (~(((/* implicit */int) (short)-11484)))))));
                        arr_19 [i_0] [i_1] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((-5011165645769521815LL) - (-5011165645769521830LL))) << (((/* implicit */int) arr_10 [i_1]))));
                        arr_20 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) (short)-7493);
                    }
                } 
            } 
        }
        for (unsigned char i_4 = 1; i_4 < 22; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (short i_5 = 0; i_5 < 24; i_5 += 4) 
            {
                for (int i_6 = 0; i_6 < 24; i_6 += 1) 
                {
                    {
                        arr_31 [i_0] [(short)8] [i_6] [i_0] = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) arr_29 [i_0] [3U] [i_5] [i_6] [i_5] [i_5])), (var_10))) >= (((unsigned int) min((-1025729893), (((/* implicit */int) (short)7492)))))));
                        arr_32 [i_0] [i_4] [i_6] [i_4] = ((/* implicit */unsigned char) (unsigned short)15442);
                        arr_33 [i_6] = ((/* implicit */int) (short)7492);
                    }
                } 
            } 
            arr_34 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)229))) & (((((/* implicit */_Bool) 1423898747U)) ? (var_0) : (1699490796U)))))) ? (((long long int) arr_27 [i_4] [5] [i_4] [i_4] [i_4])) : (((/* implicit */long long int) ((arr_23 [i_4 - 1]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_4] [i_4]))))))));
            /* LoopSeq 2 */
            for (unsigned short i_7 = 2; i_7 < 23; i_7 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 24; i_8 += 3) 
                {
                    for (int i_9 = 0; i_9 < 24; i_9 += 1) 
                    {
                        {
                            arr_45 [i_7] [0] [i_9] = ((/* implicit */unsigned int) ((var_7) >= (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_21 [i_4 + 1] [i_7 - 2])) : (((/* implicit */int) arr_21 [i_4 + 1] [i_7 - 1]))))));
                            arr_46 [i_0] [17] [5U] [i_0] [i_8] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) var_7)), ((+(var_1)))));
                            arr_47 [i_9] [i_0] [i_8] [i_7 - 1] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */int) min((((/* implicit */short) (unsigned char)84)), (var_8)))) / (var_4)))));
                            arr_48 [i_0] [i_8] [i_7] [(unsigned char)14] [i_8] [i_8] [i_9] = arr_30 [i_0] [i_4] [i_8] [i_9];
                            arr_49 [i_0] [i_4] [i_7] [i_8] [i_0] = ((((/* implicit */_Bool) var_10)) ? ((((-(5011165645769521814LL))) / (((/* implicit */long long int) min((((/* implicit */int) (unsigned short)15467)), (-299934306)))))) : (((/* implicit */long long int) (+((+(((/* implicit */int) (short)7492))))))));
                        }
                    } 
                } 
                arr_50 [(signed char)23] [i_7 + 1] = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_43 [(signed char)12])) && (((/* implicit */_Bool) 2461467297227299451ULL))))), (((((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_4] [i_7])) ? (2952072668524349630ULL) : (((/* implicit */unsigned long long int) 2595476499U)))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((1905581689) | (((/* implicit */int) (unsigned char)67)))))))));
                arr_51 [i_0] [i_4] [i_7 - 1] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) max(((short)13217), (((/* implicit */short) arr_26 [i_4 + 1] [i_4 + 1] [i_7] [i_7]))))) <= ((~((~(((/* implicit */int) (unsigned char)169))))))));
            }
            for (unsigned short i_10 = 2; i_10 < 23; i_10 += 4) /* same iter space */
            {
                arr_55 [i_0] [i_10] [i_10] = ((/* implicit */unsigned int) 1765681181);
                arr_56 [i_0] [i_4 - 1] [i_10] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((unsigned char) (+(((/* implicit */int) (unsigned short)65434)))))), (((((/* implicit */_Bool) var_9)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)136)))))));
                arr_57 [i_0] [i_4] [i_0] = ((/* implicit */short) -1025729893);
            }
        }
        arr_58 [i_0] = ((/* implicit */unsigned long long int) -5011165645769521815LL);
        arr_59 [19LL] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_6 [i_0] [i_0]), (((/* implicit */unsigned int) -1931869065))))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_40 [i_0])))))));
    }
}
