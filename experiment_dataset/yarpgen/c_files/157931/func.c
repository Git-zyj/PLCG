/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157931
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
    for (int i_0 = 2; i_0 < 24; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 23; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) arr_2 [i_1]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) (unsigned char)63);
                                var_15 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((1626786993505775356LL) <= (var_9)))) / (((/* implicit */int) (short)-16573))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4348351417397716040LL)) ? (((/* implicit */int) arr_9 [i_0 + 1] [i_0 - 1] [i_0 - 2])) : (((/* implicit */int) (signed char)52))))) : (min((((/* implicit */unsigned long long int) ((unsigned int) arr_6 [i_1] [i_1] [i_1] [i_0 - 2] [i_0 - 2]))), (((unsigned long long int) 1554558612))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */int) min((var_16), ((+((-2147483647 - 1))))));
                    var_17 = ((/* implicit */int) ((((/* implicit */unsigned long long int) 1364166621U)) > (((unsigned long long int) (~(arr_11 [i_0] [(unsigned short)7] [11U] [i_0 + 1] [i_0]))))));
                }
            } 
        } 
    } 
    var_18 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_11)), (var_6)))) ? (min((((/* implicit */unsigned long long int) max((813676750), ((-2147483647 - 1))))), ((+(13050164199123073363ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_7)), (3445015257560480320ULL)))) ? (((/* implicit */int) ((_Bool) (short)22334))) : ((~(((/* implicit */int) (signed char)121)))))))));
}
