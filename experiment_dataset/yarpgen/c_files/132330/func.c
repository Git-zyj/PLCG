/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132330
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
    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */long long int) (~(((/* implicit */int) var_9))))) >= (((191003835103305268LL) - (191003835103305268LL))))))));
    var_15 = ((/* implicit */signed char) -191003835103305267LL);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_7 [i_1] = ((/* implicit */short) ((((((/* implicit */int) (signed char)26)) | (((/* implicit */int) var_13)))) + (((/* implicit */int) ((_Bool) arr_1 [i_0 - 1])))));
                arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) var_4);
                var_16 = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) arr_0 [i_0 - 1])), (7681707980046078778ULL))), (((/* implicit */unsigned long long int) ((arr_0 [i_0 - 1]) >= (arr_0 [i_0 - 1]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 2; i_2 < 18; i_2 += 3) 
    {
        for (short i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            {
                arr_14 [i_2] [i_3] = ((/* implicit */unsigned long long int) arr_6 [i_2]);
                var_17 = ((/* implicit */unsigned long long int) (_Bool)1);
                arr_15 [i_2] = ((/* implicit */unsigned long long int) 191003835103305269LL);
                var_18 = ((/* implicit */long long int) arr_4 [i_2]);
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) max((var_1), (((/* implicit */unsigned short) arr_6 [i_2])))))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_5)) / (1731529029961652512LL)))) % (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) * (((/* implicit */int) ((signed char) var_3)))));
}
