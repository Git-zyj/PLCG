/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130275
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
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) max((min((arr_3 [i_2] [i_0] [i_0]), (((/* implicit */int) ((short) 747428420U))))), (((arr_3 [i_0] [i_0] [i_0]) & (arr_3 [8] [4U] [i_2]))))))));
                    arr_6 [i_2] [i_1] = ((/* implicit */unsigned char) ((unsigned int) (unsigned short)7001));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) 41436375);
    var_20 = ((/* implicit */_Bool) ((3522769043U) * (((/* implicit */unsigned int) (-(var_9))))));
    /* LoopNest 3 */
    for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
    {
        for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 10; i_6 += 3) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */short) max((((/* implicit */unsigned int) min(((unsigned short)6999), (((/* implicit */unsigned short) arr_10 [i_7]))))), (((3547538875U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)99)))))));
                                var_22 = ((/* implicit */short) arr_19 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]);
                                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (short)12231)) ? (3513394125343516004LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)155)))));
                            }
                        } 
                    } 
                    arr_20 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((short) ((((((/* implicit */_Bool) arr_18 [i_3] [i_3] [(unsigned char)7] [i_3] [i_3])) && (((/* implicit */_Bool) arr_4 [i_3] [i_3])))) ? (((((/* implicit */_Bool) 18090969658238788950ULL)) ? (arr_19 [i_5] [i_5] [i_4] [(unsigned short)1] [i_4] [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)32512)) & (((/* implicit */int) (signed char)-77))))))));
                }
            } 
        } 
    } 
}
