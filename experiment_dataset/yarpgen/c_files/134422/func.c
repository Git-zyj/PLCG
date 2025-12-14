/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134422
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
    for (unsigned long long int i_0 = 4; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) (+(max((((16573624587667191271ULL) * (((/* implicit */unsigned long long int) 0LL)))), (((/* implicit */unsigned long long int) (_Bool)1))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    var_14 = ((/* implicit */long long int) ((((/* implicit */int) max(((unsigned short)24397), (((/* implicit */unsigned short) arr_3 [i_0] [i_0 - 4] [4U]))))) >> (min((((/* implicit */unsigned long long int) (_Bool)0)), (arr_5 [i_0 - 4] [i_0 + 1])))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        arr_11 [i_0] [i_1] [i_2] [8U] = ((int) ((((((/* implicit */_Bool) 5663374408255362485ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (15508067032077653567ULL))) * ((-(12783369665454189130ULL)))));
                        arr_12 [i_1] [i_3] = ((/* implicit */_Bool) (((~(1614327269605844697ULL))) + (((/* implicit */unsigned long long int) var_13))));
                        var_15 = ((/* implicit */int) var_0);
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned short) arr_2 [i_0 - 4]);
                        arr_16 [i_4] [i_2] [i_1] [i_0 - 4] = ((/* implicit */unsigned int) ((unsigned long long int) var_1));
                        var_17 = ((/* implicit */unsigned long long int) var_5);
                        var_18 = ((/* implicit */unsigned char) (~(12783369665454189130ULL)));
                    }
                }
                /* vectorizable */
                for (signed char i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    arr_19 [i_0 + 1] [4ULL] = ((/* implicit */int) var_5);
                    var_19 = (~(0U));
                }
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((unsigned char) (!(((/* implicit */_Bool) var_10)))))), (min((((/* implicit */unsigned int) ((unsigned char) 4294967287U))), (var_11)))));
}
