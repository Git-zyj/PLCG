/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109347
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
    var_20 = 16777216U;
    var_21 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 16777219U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-122)) ? (16777209U) : (16777219U)))) : (((((/* implicit */_Bool) 16777216U)) ? (15928660562883787459ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-89))))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            arr_6 [i_0] [(short)7] [i_0] = ((/* implicit */short) arr_5 [i_0]);
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */int) ((unsigned long long int) (unsigned char)43));
                            var_23 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_3 [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)123))) : (3722572734U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((unsigned char) arr_3 [i_4])), ((unsigned char)116))))) : (4278190076U)));
                            arr_14 [(short)7] [(short)7] [i_2] [i_2] [10] [i_2] [10] = max((((unsigned long long int) (short)-11078)), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_3] [i_0]))))));
                            arr_15 [(unsigned char)1] [(unsigned char)1] = 1152921504606846975LL;
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((unsigned long long int) (short)17859)) == (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min(((short)-11078), (((/* implicit */short) var_10))))), (4278190079U)))))))));
        }
        for (signed char i_5 = 0; i_5 < 13; i_5 += 1) 
        {
            var_25 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [4U] [i_0] [12LL]))) % (arr_4 [i_0] [i_5])))) ? (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_5] [8U] [(unsigned char)9]))) : (4773129527010047624ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_5])) ? (16777221U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [12] [12] [12])))))))), (((/* implicit */unsigned long long int) max((arr_7 [i_5] [i_0] [i_0]), (arr_7 [i_0] [i_0] [i_5]))))));
            var_26 = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) arr_16 [i_5] [i_5] [i_5]))) & (((/* implicit */int) ((arr_16 [i_0] [i_0] [i_5]) >= (arr_16 [i_0] [i_0] [i_0]))))));
        }
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned char i_7 = 0; i_7 < 13; i_7 += 4) 
            {
                {
                    var_27 -= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (short)11077)), (6477662381393439234ULL)));
                    var_28 = ((/* implicit */unsigned int) max(((-(arr_18 [i_6] [i_6]))), (((/* implicit */unsigned long long int) ((long long int) (short)-26022)))));
                }
            } 
        } 
        arr_24 [i_0] = ((((/* implicit */long long int) ((/* implicit */int) max((((short) var_13)), (((/* implicit */short) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_1 [i_0]))))))))) & ((-(min((((/* implicit */long long int) (short)-11082)), (285905711637693114LL))))));
    }
    var_29 = ((/* implicit */unsigned long long int) ((long long int) (short)11059));
    var_30 = ((/* implicit */long long int) var_9);
}
