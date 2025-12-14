/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182776
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
    var_18 -= ((/* implicit */signed char) ((((((/* implicit */int) var_8)) << (((min((var_12), (((/* implicit */long long int) var_0)))) - (39111LL))))) - (((/* implicit */int) ((((/* implicit */int) max((var_0), (((/* implicit */unsigned short) (unsigned char)247))))) > (((((/* implicit */int) var_0)) + (((/* implicit */int) var_7)))))))));
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((17127742389133103135ULL), (((/* implicit */unsigned long long int) ((_Bool) (unsigned char)9)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)247))) : (((((/* implicit */long long int) ((/* implicit */int) ((var_16) != (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))) / (max((var_9), (((/* implicit */long long int) var_3))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [i_1] = ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) -673697051)), (17294802607847400674ULL))), (((/* implicit */unsigned long long int) ((arr_3 [i_0] [i_1]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23992))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (unsigned short)61386))))))) % (((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)247)) | (348989283)))) & (18446744073709551615ULL)))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((int) var_14));
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            {
                var_21 -= ((/* implicit */int) (unsigned char)242);
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    for (int i_5 = 3; i_5 < 13; i_5 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) (unsigned char)181)) == (-1985459776))));
                            var_23 = ((/* implicit */unsigned char) max((((/* implicit */int) ((((int) var_3)) <= (((/* implicit */int) arr_4 [i_2] [i_3] [i_4]))))), (-1)));
                        }
                    } 
                } 
                arr_17 [i_2] = ((/* implicit */unsigned int) ((min((((((/* implicit */int) var_17)) - (((/* implicit */int) var_13)))), (((/* implicit */int) min((((/* implicit */unsigned char) var_8)), ((unsigned char)247)))))) > (((/* implicit */int) var_8))));
                var_24 -= ((/* implicit */unsigned char) ((unsigned short) (((_Bool)1) && (((/* implicit */_Bool) 1151941465862150960ULL)))));
            }
        } 
    } 
}
