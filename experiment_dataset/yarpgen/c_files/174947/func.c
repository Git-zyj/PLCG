/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174947
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_2 [i_0 - 1])))), (((/* implicit */int) min((((/* implicit */short) (signed char)-1)), (arr_0 [i_0 - 1]))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned int i_3 = 1; i_3 < 12; i_3 += 4) 
                    {
                        {
                            arr_12 [i_2] [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(((((/* implicit */int) (signed char)12)) * (((/* implicit */int) arr_0 [i_2]))))))), (((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [0U] [i_2] [i_3 + 1] [12ULL]))) : (1080863910568919040ULL)))));
                            arr_13 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3 - 1] = ((/* implicit */int) arr_9 [i_3] [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_3]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = var_13;
    var_17 = ((/* implicit */long long int) var_11);
    var_18 = ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) ((signed char) (signed char)7))))));
    /* LoopSeq 1 */
    for (unsigned int i_4 = 0; i_4 < 16; i_4 += 2) 
    {
        arr_18 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-7)) * (((/* implicit */int) ((((((/* implicit */long long int) 2147483647)) + (-4502645177147561276LL))) != (((/* implicit */long long int) (+(((/* implicit */int) (short)-6603))))))))));
        arr_19 [i_4] = ((/* implicit */signed char) ((long long int) var_10));
        arr_20 [i_4] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((arr_16 [i_4] [i_4]), (((/* implicit */int) (unsigned char)239))))), (max((((((/* implicit */_Bool) var_0)) ? (11759235547550543546ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23393))))), (((/* implicit */unsigned long long int) ((unsigned char) -1924118078)))))));
        arr_21 [i_4] = ((((/* implicit */_Bool) 6687508526159008049ULL)) && (((/* implicit */_Bool) var_4)));
        arr_22 [i_4] = ((/* implicit */unsigned long long int) (_Bool)1);
    }
}
