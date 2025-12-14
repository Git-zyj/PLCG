/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175362
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_13 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (~(max((arr_3 [i_0] [i_3 + 1] [i_2]), (((/* implicit */unsigned int) var_4))))));
                                arr_14 [(_Bool)0] [i_1] [i_1] [i_1] [(_Bool)0] = ((((/* implicit */_Bool) arr_5 [i_4] [(_Bool)1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) (short)-15186)), (-605987859)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)23637)) ? (((/* implicit */int) arr_4 [i_3 - 1])) : (((/* implicit */int) var_1))))))))) : (((long long int) min((3303852240U), (arr_10 [i_0] [2LL] [i_2] [i_3 + 1] [i_0])))));
                                arr_15 [(signed char)4] [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 - 1] = ((/* implicit */unsigned int) (+(((((/* implicit */long long int) ((/* implicit */int) var_4))) % (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) 991115048U)) : (var_2)))))));
                                var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) 165068886U)) ? (6106223581058736174LL) : (((/* implicit */long long int) 3303852240U)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -3597572118916606126LL)) ? (((/* implicit */int) var_1)) : (-699467114))))));
                                arr_16 [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)62)) ? (-8321146261818975834LL) : (7163629079841659509LL)));
                            }
                        } 
                    } 
                    arr_17 [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((max((var_8), (((/* implicit */int) (signed char)50)))) << (((/* implicit */int) arr_4 [i_1]))))) ? ((+(((/* implicit */int) var_4)))) : (((/* implicit */int) ((_Bool) (unsigned char)2)))));
                }
                for (int i_5 = 1; i_5 < 18; i_5 += 3) 
                {
                    arr_22 [(unsigned char)3] = ((/* implicit */unsigned int) (unsigned char)46);
                    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) min((max((4129898410U), (3334877870U))), (((/* implicit */unsigned int) min((var_6), (var_5))))))) ? ((+(((-7028483318389565237LL) % (((/* implicit */long long int) arr_10 [16U] [i_1] [i_5 + 1] [i_1] [i_1])))))) : (((/* implicit */long long int) ((4151820829U) << (((((/* implicit */int) (short)-23637)) + (23658))))))));
                    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) (short)23637))));
                }
                /* vectorizable */
                for (long long int i_6 = 0; i_6 < 19; i_6 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 19; i_7 += 4) 
                    {
                        for (unsigned short i_8 = 3; i_8 < 18; i_8 += 3) 
                        {
                            {
                                var_13 = ((((((/* implicit */_Bool) var_2)) ? (arr_20 [12U] [i_1]) : (((/* implicit */unsigned long long int) 4129898410U)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))));
                                arr_30 [i_7] [i_1] [i_6] [i_1] [i_8] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_5))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_9 = 0; i_9 < 19; i_9 += 1) 
                    {
                        for (signed char i_10 = 3; i_10 < 16; i_10 += 1) 
                        {
                            {
                                var_14 *= ((/* implicit */signed char) ((1363131288U) % (((/* implicit */unsigned int) var_8))));
                                arr_35 [i_10] [i_9] [i_6] [i_1] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */int) var_9)) << (((17716787474679950781ULL) - (17716787474679950750ULL)))))));
                                var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))));
                                arr_36 [i_9] [i_1] [(unsigned short)9] [i_6] [i_10 + 3] = ((/* implicit */signed char) ((-7028483318389565242LL) > (((/* implicit */long long int) ((/* implicit */int) arr_21 [(short)18] [(short)18] [i_9])))));
                                arr_37 [i_0] [i_0] [i_0] [i_0] [i_6] [i_9] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) -1287915885)) ? (var_8) : (((/* implicit */int) var_6))))));
                            }
                        } 
                    } 
                    arr_38 [i_0] [i_1] [i_0] [i_1] = (-(((/* implicit */int) arr_31 [i_6] [i_1] [i_0])));
                }
                /* LoopNest 2 */
                for (unsigned char i_11 = 0; i_11 < 19; i_11 += 2) 
                {
                    for (unsigned short i_12 = 0; i_12 < 19; i_12 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned int) min((var_16), (max((((((/* implicit */_Bool) 2719690203U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (3625942765U))), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)117)) == (((/* implicit */int) arr_31 [i_11] [i_1] [i_0]))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) -175060767051224876LL))))))))))));
                            arr_43 [i_0] [i_1] [i_11] [i_0] = ((unsigned short) max((((/* implicit */long long int) max((arr_8 [i_0] [i_1] [i_11] [i_11] [i_12]), (((/* implicit */unsigned char) arr_34 [i_0] [i_1] [i_11] [i_11] [i_0]))))), (min((((/* implicit */long long int) (signed char)-43)), (var_2)))));
                            var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) var_4))));
                            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) (~(-1287915885)))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [i_1] [i_11] [5] [i_1] [i_1] [i_0]))))))) : (max(((~(((/* implicit */int) (signed char)-28)))), ((~(((/* implicit */int) var_5)))))))))));
                        }
                    } 
                } 
                arr_44 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_0] [i_1] [i_1]))) : (var_2)))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-34))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)79))) : (arr_24 [i_0] [i_1] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) var_9))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) ((_Bool) var_9));
    var_20 = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) min((var_7), (((/* implicit */unsigned char) var_1))))) : (((/* implicit */int) var_3))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)11)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) (signed char)-43)) ? (3984872803U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
    var_21 = ((/* implicit */signed char) (~(var_0)));
}
