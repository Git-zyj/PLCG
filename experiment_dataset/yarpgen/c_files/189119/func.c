/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189119
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    for (int i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (~((-(arr_12 [i_3 - 1] [i_3] [i_1] [i_3 - 1] [i_1] [i_1 + 1] [i_1]))))))));
                            var_18 = ((/* implicit */unsigned int) 466561105670256383ULL);
                            var_19 -= ((/* implicit */signed char) ((int) min((min((((/* implicit */unsigned long long int) (unsigned char)103)), (15840050705315251395ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [i_2] [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_4]))))))));
                            var_20 = var_10;
                            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) min((min((arr_6 [i_1 - 2] [i_3 - 1] [i_1 - 2] [i_2]), (arr_6 [i_1 - 2] [i_3 - 1] [i_1 - 2] [i_3 - 1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_3 - 1] [i_1 + 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1))))))))));
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (+(((/* implicit */int) (short)3584))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)221))))) : (((((/* implicit */_Bool) var_9)) ? (674150007U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
            var_23 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (short)-4)), (2606693368394300228ULL)));
        }
        for (short i_5 = 2; i_5 < 18; i_5 += 1) 
        {
            arr_17 [i_0] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (-(var_7)))) <= (arr_12 [i_5 - 1] [i_5] [16U] [i_5 - 1] [16U] [i_0] [i_0])));
            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (-(arr_6 [i_0] [i_5] [i_5] [i_5]))))));
        }
        /* vectorizable */
        for (short i_6 = 2; i_6 < 19; i_6 += 4) 
        {
            /* LoopNest 3 */
            for (short i_7 = 0; i_7 < 20; i_7 += 4) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 4) 
                {
                    for (unsigned char i_9 = 0; i_9 < 20; i_9 += 1) 
                    {
                        {
                            arr_31 [i_0] [i_0] [(unsigned char)19] [(unsigned char)19] [i_9] = ((/* implicit */unsigned long long int) var_11);
                            var_25 = ((/* implicit */signed char) arr_5 [i_0] [9U] [(unsigned char)3] [i_0]);
                        }
                    } 
                } 
            } 
            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) arr_24 [i_6 + 1] [i_6 - 1] [i_6 - 2] [i_6 - 1]))));
            arr_32 [i_0] [i_6] = ((/* implicit */unsigned char) var_12);
            var_27 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) * (15840050705315251402ULL))) % (17980182968039295248ULL)));
        }
        arr_33 [4ULL] [i_0] = ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)24))))), (((unsigned int) var_2))))) | (17980182968039295233ULL));
    }
    var_28 = var_13;
}
