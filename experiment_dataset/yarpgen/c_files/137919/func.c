/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137919
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
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                var_16 &= ((/* implicit */short) (unsigned short)56374);
                var_17 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)9164))))) * (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) arr_1 [i_1 + 2]))) || (((/* implicit */_Bool) ((long long int) (unsigned short)56388))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned short)56377)) ? (((((/* implicit */int) (unsigned short)56369)) | (((/* implicit */int) var_5)))) : (((/* implicit */int) ((var_1) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9149))))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 8; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_12 [0LL] [8] [i_1] [(unsigned short)8] [i_3] [i_3] &= ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)9161))))) ? (max((((/* implicit */unsigned long long int) (unsigned short)9150)), (arr_2 [i_2 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)56374), ((unsigned short)9154))))));
                            var_18 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)56374)) ? (((/* implicit */int) (unsigned short)56369)) : (((/* implicit */int) (unsigned short)56382))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65534)) && (((/* implicit */_Bool) (((+(((/* implicit */int) var_5)))) >> ((((-(((/* implicit */int) var_10)))) + (3))))))));
}
