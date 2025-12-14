/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146677
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_0), (((/* implicit */unsigned char) (_Bool)1)))))) != (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-61))) | ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)6))) : (18446744073709551615ULL)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned char) arr_4 [i_0]);
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_18 = ((min((arr_10 [i_0] [i_0] [i_2] [i_3]), (arr_10 [i_0] [i_1] [i_0] [i_3]))) ? (((arr_10 [i_0] [i_1] [i_2] [i_0]) ? (((/* implicit */int) arr_10 [i_3] [i_2] [i_1] [i_0])) : (((/* implicit */int) (_Bool)1)))) : ((+(((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3])))));
                            var_19 = (!(((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) 1306877566)) ? (((/* implicit */int) (unsigned char)22)) : (((/* implicit */int) (unsigned char)255)))))));
                            var_20 = ((/* implicit */int) var_8);
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) (signed char)-2);
    /* LoopSeq 1 */
    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 1) 
    {
        var_22 -= ((/* implicit */unsigned char) (unsigned short)47756);
        arr_16 [i_4] [i_4] = ((/* implicit */unsigned char) ((_Bool) (unsigned char)255));
    }
}
