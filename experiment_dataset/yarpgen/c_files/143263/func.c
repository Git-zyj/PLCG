/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143263
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) max((arr_1 [i_0]), ((~(((/* implicit */int) var_5))))))) ? (arr_1 [i_0]) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */unsigned long long int) arr_1 [i_0])))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_5 [i_0] [i_0] [i_2]);
                    var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */short) ((unsigned char) (_Bool)1))), (((short) arr_6 [i_0] [i_1] [i_2]))))) ^ (var_3)));
                    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? ((+(max((var_3), (((/* implicit */int) var_8)))))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-29630)) : (((/* implicit */int) (_Bool)1))))))));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) ((((/* implicit */int) (short)29622)) % (((/* implicit */int) var_4)))))) - (((/* implicit */int) max((arr_5 [i_2] [i_2 + 1] [i_2 - 2]), (arr_5 [i_2 + 2] [i_2 + 2] [i_2 + 2]))))));
                }
            } 
        } 
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
        {
            arr_16 [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_6))))), (((((/* implicit */_Bool) arr_13 [i_3] [i_3] [i_4])) ? (arr_9 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)86)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))) / ((~(var_7))))) : (((/* implicit */long long int) (-(arr_9 [i_3]))))));
            /* LoopSeq 1 */
            for (int i_5 = 0; i_5 < 23; i_5 += 2) 
            {
                arr_19 [i_4] [i_4] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_13 [i_3] [i_3] [i_4])) ? (arr_9 [i_4]) : (((/* implicit */unsigned int) arr_17 [i_3])))), (((/* implicit */unsigned int) max((arr_18 [i_3] [i_4] [i_4]), (((/* implicit */unsigned short) var_11))))))))));
                var_14 += ((/* implicit */unsigned char) max((((((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_18 [i_3] [i_3] [i_5]))))) << ((((((_Bool)1) ? (((/* implicit */int) (short)-29634)) : (-1480421678))) + (29640))))), (((/* implicit */int) (unsigned char)17))));
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)179))))) ? (((/* implicit */int) max((var_5), (((/* implicit */short) var_11))))) : (((((/* implicit */_Bool) (signed char)72)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))))))) : (var_7)));
                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8191)) ? (((/* implicit */int) arr_10 [i_4] [i_4])) : (((/* implicit */int) (unsigned char)251))))) && (((/* implicit */_Bool) ((int) var_11))))))) : (-1LL))))));
            }
            var_17 = 1480421678;
            var_18 = ((/* implicit */unsigned char) var_7);
        }
        var_19 *= ((/* implicit */short) ((((/* implicit */int) arr_10 [i_3] [i_3])) << (((((/* implicit */int) arr_10 [i_3] [i_3])) % (((/* implicit */int) arr_10 [i_3] [i_3]))))));
        var_20 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)65379)) ? (((((/* implicit */int) (unsigned char)78)) ^ (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-116)) : (arr_13 [i_3] [i_3] [4]))))) : ((+((-(((/* implicit */int) var_6))))))));
    }
    var_21 |= ((int) (_Bool)1);
}
