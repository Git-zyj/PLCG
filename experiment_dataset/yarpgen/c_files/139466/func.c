/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139466
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)0))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((min((arr_1 [(signed char)5]), (((/* implicit */unsigned long long int) arr_0 [i_0])))) - (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0]))))))))));
        var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) var_2))));
        var_11 = ((/* implicit */int) arr_1 [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            arr_9 [(unsigned char)14] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_1] [i_2])) ? (((/* implicit */int) ((max((10787634822803965784ULL), (((/* implicit */unsigned long long int) (unsigned short)14640)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)-1)), ((unsigned short)57017)))))))) : (((((/* implicit */int) arr_4 [i_2])) << ((((~(((/* implicit */int) arr_5 [i_2])))) + (139)))))));
            var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) (+(((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1]))) <= (var_0))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_8 [i_1] [i_2] [9U])))))))));
            var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_2)))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_1] [i_1]))))))))));
            var_14 += ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_6 [i_1] [i_1])) << (((((/* implicit */int) arr_5 [15LL])) - (109)))))));
        }
        for (short i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            var_15 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)8518)) >> (((((/* implicit */int) (unsigned char)219)) - (202)))))) || (((/* implicit */_Bool) (unsigned char)170))));
            /* LoopSeq 1 */
            for (unsigned short i_4 = 2; i_4 < 17; i_4 += 3) 
            {
                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (~((-((+(((/* implicit */int) var_7)))))))))));
                var_17 = ((/* implicit */short) arr_7 [i_1]);
                var_18 = ((/* implicit */unsigned char) (((((-(((/* implicit */int) arr_4 [i_1])))) + (2147483647))) >> (max(((~(arr_11 [i_3] [i_1]))), (((/* implicit */int) ((_Bool) var_6)))))));
                /* LoopNest 2 */
                for (unsigned short i_5 = 1; i_5 < 19; i_5 += 4) 
                {
                    for (int i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        {
                            arr_19 [i_4 + 1] = ((/* implicit */unsigned long long int) ((min((((/* implicit */int) min(((unsigned char)0), (arr_13 [i_5] [i_5] [i_5] [(unsigned char)8])))), (((((/* implicit */int) arr_5 [i_4])) << (((/* implicit */int) var_7)))))) | ((~(((/* implicit */int) arr_15 [i_1] [i_1] [i_6]))))));
                            var_19 ^= ((/* implicit */unsigned char) (-(67108860)));
                            var_20 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_18 [i_6] [i_5 - 1] [i_5 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_18 [2U] [i_6] [i_5 - 1] [i_5] [i_4 + 3] [i_4 - 2])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [11ULL] [i_4 - 2] [i_4 - 2])))))));
                        }
                    } 
                } 
            }
        }
        var_21 ^= ((/* implicit */int) ((max((((((/* implicit */int) var_1)) << (((((/* implicit */int) arr_17 [(signed char)13] [i_1])) - (175))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_6 [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) (signed char)85)))))) == (((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned char)1), (((/* implicit */unsigned char) arr_7 [i_1]))))))))));
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) min((max((((/* implicit */int) ((((/* implicit */int) arr_18 [i_1] [1U] [(unsigned char)10] [i_1] [i_1] [i_1])) != (((/* implicit */int) arr_15 [i_1] [i_1] [i_1]))))), (((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [14])))))), ((-(((/* implicit */int) ((((/* implicit */int) arr_17 [i_1] [i_1])) > (((/* implicit */int) arr_17 [i_1] [i_1]))))))))))));
    }
    var_23 -= ((/* implicit */unsigned char) var_1);
}
