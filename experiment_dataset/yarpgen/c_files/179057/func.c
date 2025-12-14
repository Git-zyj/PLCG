/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179057
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
    var_12 = ((unsigned long long int) min((min(((unsigned short)28731), ((unsigned short)58939))), (((/* implicit */unsigned short) max(((unsigned char)134), (((/* implicit */unsigned char) (_Bool)1)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned int) 1263675622U)));
        var_14 &= ((/* implicit */unsigned short) ((unsigned long long int) (!(((/* implicit */_Bool) (short)32764)))));
    }
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned int) max((((/* implicit */unsigned long long int) arr_3 [i_1])), (14775399365596172131ULL)))))));
        var_15 = ((/* implicit */_Bool) max((((/* implicit */unsigned short) ((_Bool) min((arr_4 [i_1] [i_1]), (((/* implicit */unsigned int) var_7)))))), (min((((/* implicit */unsigned short) ((short) var_6))), (min((((/* implicit */unsigned short) (signed char)(-127 - 1))), (arr_3 [i_1])))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned short i_5 = 1; i_5 < 21; i_5 += 4) 
                    {
                        {
                            var_16 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) ((_Bool) arr_12 [i_4] [i_3]))), (max((((/* implicit */unsigned short) arr_10 [i_2] [i_2])), ((unsigned short)60670)))))), ((+(max((17325693121627234155ULL), (9911432809915329247ULL)))))));
                            arr_16 [i_3] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)17660))))), (((unsigned short) var_2)))))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned int i_6 = 1; i_6 < 22; i_6 += 4) 
                            {
                                var_17 = ((/* implicit */unsigned long long int) ((unsigned char) (+(((/* implicit */int) arr_15 [0U] [i_4] [i_5] [i_6])))));
                                arr_19 [i_3] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((unsigned short) ((_Bool) 2037016625258494473ULL)));
                                var_18 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                                var_19 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) 1825301277))));
                            }
                            for (unsigned long long int i_7 = 1; i_7 < 21; i_7 += 3) 
                            {
                                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) min(((+(min((var_1), (17325693121627234137ULL))))), (max((((unsigned long long int) var_1)), (((/* implicit */unsigned long long int) ((unsigned char) 9911432809915329247ULL))))))))));
                                arr_23 [i_3] [i_3] [i_4] [i_5 - 1] [i_7 + 2] = ((/* implicit */_Bool) max((min((((unsigned long long int) arr_8 [i_2] [i_3])), (min((arr_12 [i_2] [i_3]), (((/* implicit */unsigned long long int) arr_21 [i_2] [(unsigned char)22] [i_2] [i_2])))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 13551491217156712590ULL)))))));
                                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) min((((unsigned long long int) max((var_8), (((/* implicit */int) (unsigned char)255))))), (max((min((8535311263794222369ULL), (15717468198487981578ULL))), (((/* implicit */unsigned long long int) min(((short)575), (var_0)))))))))));
                            }
                        }
                    } 
                } 
                arr_24 [i_3] = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) min(((unsigned short)2951), (((/* implicit */unsigned short) arr_18 [i_2] [i_3]))))), (((unsigned long long int) arr_6 [i_2])))), ((+(max((var_4), (((/* implicit */unsigned long long int) arr_14 [i_3] [i_3] [i_3] [i_2] [i_2] [i_2]))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max(((short)19026), (((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)114)))))))), (max((1455287466U), (((/* implicit */unsigned int) (unsigned short)14885))))));
}
