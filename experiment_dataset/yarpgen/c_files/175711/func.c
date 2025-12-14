/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175711
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
    var_11 -= ((/* implicit */unsigned char) 1858171992648125685ULL);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */signed char) min(((~(((/* implicit */int) (unsigned char)47)))), (((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned short) (unsigned char)117)), (arr_5 [i_1])))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 3; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 7400792295936384333LL)) : ((+(var_10)))));
                                var_13 = -4938200541548450709LL;
                                var_14 = ((/* implicit */signed char) arr_9 [i_2 - 2] [13U] [7U] [10ULL] [i_0 + 1] [i_0]);
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_2 [(_Bool)1] [i_1] [i_1]), (((/* implicit */unsigned int) arr_3 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) (unsigned char)149)) ? (12758000298292428495ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) arr_10 [i_0 + 3]))))) ? (max((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [3ULL] [15U]))) : (var_7))), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0])))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) 403751991))));
}
