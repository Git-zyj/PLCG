/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106656
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -579504353245154809LL)) ? (((/* implicit */unsigned long long int) 5160966679913812247LL)) : (17722971448024274313ULL)));
    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) 5908026129334681471ULL))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */short) (((_Bool)0) ? (-579504353245154823LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_16 ^= ((/* implicit */int) arr_2 [i_0 - 3]);
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_0) + (var_0)))) ? ((-(((/* implicit */int) arr_6 [i_0] [i_1])))) : (arr_1 [8])))) ? (((((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 2] [i_0 - 1])) - (((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1])))) : ((-(min((var_3), (arr_1 [i_3])))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */int) ((short) ((-579504353245154809LL) != (579504353245154809LL))));
                var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) var_6)) | (var_12)))) ? (max((((/* implicit */unsigned long long int) var_13)), (arr_3 [2] [i_1]))) : (((/* implicit */unsigned long long int) min((arr_5 [i_0] [i_1] [i_1]), (((/* implicit */int) var_10))))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((529857383906377730LL), (((/* implicit */long long int) 2910425645U)))) > (((/* implicit */long long int) ((((/* implicit */int) var_7)) >> (((arr_11 [i_0] [(_Bool)1] [7LL] [(short)3]) + (1306652773))))))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) var_2);
}
