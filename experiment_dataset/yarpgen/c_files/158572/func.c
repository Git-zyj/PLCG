/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158572
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
    var_13 = ((/* implicit */_Bool) var_6);
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(max((1099851213), (1099851213)))))) ? (((unsigned long long int) var_4)) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -1099851213)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))) ^ (((((/* implicit */_Bool) 15)) ? (((/* implicit */int) (_Bool)0)) : (1446913456))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] [i_1 - 1] |= ((/* implicit */unsigned int) ((((int) (((_Bool)1) || (((/* implicit */_Bool) (signed char)(-127 - 1)))))) / (((/* implicit */int) ((unsigned short) 3)))));
                arr_6 [(short)9] [i_1] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) arr_1 [i_1 - 1])) < (var_5))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 13765490870503114009ULL)))))) : (((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 - 1])) ? (arr_3 [i_0] [i_1 + 1]) : (arr_3 [i_0] [i_1 - 1])))));
                var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_7)), (arr_3 [i_0] [i_1]))))));
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) var_9);
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        arr_11 [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)112))));
        arr_12 [i_2] = arr_9 [i_2] [i_2];
    }
    /* LoopNest 3 */
    for (signed char i_3 = 4; i_3 < 14; i_3 += 2) 
    {
        for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
        {
            for (unsigned int i_5 = 0; i_5 < 15; i_5 += 2) 
            {
                {
                    var_16 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-101))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_8 [i_3])) : (((/* implicit */int) (signed char)-13)))) : ((-(((/* implicit */int) arr_15 [4] [i_5]))))))) ? (((((/* implicit */_Bool) ((signed char) var_4))) ? (((/* implicit */unsigned long long int) ((0U) % (((/* implicit */unsigned int) ((/* implicit */int) (short)29403)))))) : (4681253203206437614ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) / (13765490870503114002ULL))))))));
                    arr_22 [i_3] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1446913429)))))) > (((((/* implicit */_Bool) arr_19 [i_3 + 1] [i_3 + 1] [i_3 + 1])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)29)))))));
                    var_17 = ((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)57)), (9028120674994327252LL)))))));
                    arr_23 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2202637415572592380ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))) ? (min((((/* implicit */long long int) arr_17 [i_3 - 3] [i_3 + 1])), (((((/* implicit */long long int) -441856925)) | (-3129595528724986997LL))))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_14 [i_3 - 4] [i_4])), (((unsigned int) var_8)))))));
                    arr_24 [i_5] = ((/* implicit */unsigned short) var_5);
                }
            } 
        } 
    } 
}
