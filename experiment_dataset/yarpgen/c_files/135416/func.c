/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135416
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
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)81)) << (((458205034) - (458205031)))))), (var_5)))) ? (min((((/* implicit */unsigned long long int) var_2)), (min((((/* implicit */unsigned long long int) (_Bool)1)), (var_9))))) : (((/* implicit */unsigned long long int) (-((+(-6028924722900540674LL))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_1] = ((-9136814732523122773LL) % (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [11U]))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            arr_10 [7LL] [i_0] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) (_Bool)1)), (2773550820U)))));
                            var_13 -= ((/* implicit */signed char) ((_Bool) 0LL));
                        }
                    } 
                } 
                arr_11 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_2 [i_1] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_1])))) : (((((((/* implicit */_Bool) 4728827680797346891LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4)))) >> (((arr_1 [1]) - (2189092032U)))))));
                arr_12 [(short)4] [(short)4] |= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)184)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1206))) : (1599890456714554480ULL))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) var_8);
}
