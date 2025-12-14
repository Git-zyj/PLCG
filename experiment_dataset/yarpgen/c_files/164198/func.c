/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164198
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
    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_9)) / (((/* implicit */int) (unsigned short)10945)))))) & (((((/* implicit */int) min((((/* implicit */unsigned short) var_13)), ((unsigned short)54591)))) & (var_12))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? ((-(((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3])))) : (((((/* implicit */_Bool) (unsigned short)54591)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1))))))) ? ((((+(var_11))) + (((var_11) + (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))) : (((/* implicit */unsigned int) (-(((((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_3])) - (((/* implicit */int) var_3)))))))));
                            var_16 &= ((/* implicit */signed char) max(((((~(((/* implicit */int) var_1)))) / (arr_7 [i_2]))), ((~(((-1227319164) * (((/* implicit */int) arr_5 [i_0] [i_0]))))))));
                            var_17 = ((/* implicit */unsigned char) ((max((((/* implicit */int) ((_Bool) 0ULL))), ((~(((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_3])))))) == (((/* implicit */int) var_1))));
                            arr_12 [i_3] [i_1] [i_2] [i_2] [i_1] [i_2] &= arr_7 [i_3];
                            var_18 = ((/* implicit */unsigned short) ((1787287732) / (((/* implicit */int) (short)(-32767 - 1)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_17 [i_0] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1227319163)) ? (-405178267) : (-1227319164)))) ? (-1288341777278178508LL) : (((/* implicit */long long int) var_12)))), (max((var_0), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & (1738578021))))))));
                            arr_18 [(_Bool)1] [i_0] [i_0] [i_5] = ((/* implicit */short) max((var_11), (((/* implicit */unsigned int) ((max((var_5), (arr_1 [i_0] [(unsigned char)9]))) && (((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_4 [i_0])), (var_10)))))))));
                            var_19 = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) -1227319164)) ? (((/* implicit */int) arr_11 [(unsigned char)8] [i_1] [i_0] [i_1] [i_1] [i_1])) : (arr_7 [i_0])))) ? (((((/* implicit */long long int) ((/* implicit */int) var_10))) & (var_0))) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */long long int) arr_0 [i_0]);
                arr_19 [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) min((min((((/* implicit */int) var_8)), (-1227319164))), (((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_0])) != (((/* implicit */int) var_9)))))))), ((~((~(var_0)))))));
            }
        } 
    } 
}
