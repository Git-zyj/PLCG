/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114974
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)0)) + (((/* implicit */int) (unsigned short)52749))));
                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (unsigned char)0))));
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_1]))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)0)), ((unsigned short)50203)))) : ((-(((/* implicit */int) arr_1 [i_0]))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_2 = 1; i_2 < 15; i_2 += 2) /* same iter space */
    {
        arr_10 [i_2 - 1] = ((/* implicit */unsigned long long int) arr_2 [i_2]);
        arr_11 [i_2] [i_2 + 1] = ((/* implicit */long long int) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (4294967290U))));
        arr_12 [i_2 - 1] = ((/* implicit */short) arr_3 [6U]);
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            for (short i_4 = 2; i_4 < 12; i_4 += 3) 
            {
                {
                    var_19 = ((/* implicit */short) (+((~(862290949012638834LL)))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        for (int i_6 = 2; i_6 < 14; i_6 += 2) 
                        {
                            {
                                var_20 = ((((/* implicit */int) var_9)) - (((/* implicit */int) (short)-1680)));
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_2 + 1])) - (((/* implicit */int) arr_3 [i_4]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned short i_7 = 1; i_7 < 15; i_7 += 2) /* same iter space */
    {
        arr_26 [i_7] = ((/* implicit */_Bool) ((((/* implicit */int) (short)1682)) | (((((/* implicit */_Bool) var_0)) ? (arr_19 [i_7] [i_7] [i_7 - 1] [i_7] [i_7]) : (((/* implicit */int) (short)1679))))));
        arr_27 [i_7] [i_7 - 1] = ((/* implicit */unsigned int) arr_14 [8]);
    }
    var_22 = ((/* implicit */short) max((((5810361637312523531LL) >> ((((-(17696801396239294406ULL))) - (749942677470257206ULL))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_8) * (((/* implicit */int) (short)0))))))))));
}
