/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183233
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) (((_Bool)1) ? (((int) var_14)) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)45803)) >= (((/* implicit */int) var_0)))))));
        arr_2 [i_0] = ((/* implicit */signed char) var_0);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned int) arr_0 [i_0]));
            var_19 = ((/* implicit */short) ((long long int) arr_0 [i_0]));
        }
    }
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        for (long long int i_3 = 4; i_3 < 21; i_3 += 2) 
        {
            for (unsigned short i_4 = 0; i_4 < 22; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))))))), ((((((_Bool)1) && ((_Bool)1))) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)119))))))))));
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_1)))))) ? (((/* implicit */int) ((unsigned short) ((4294967292U) / (var_6))))) : (((((/* implicit */_Bool) arr_11 [i_3 - 2] [i_3 - 3])) ? ((~(((/* implicit */int) var_9)))) : (((/* implicit */int) ((short) (_Bool)1)))))));
                                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((min((1614496322U), (((/* implicit */unsigned int) arr_13 [i_3 + 1] [i_2] [i_2] [i_2])))) != (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (3)))))))));
                            }
                        } 
                    } 
                    arr_20 [(unsigned char)13] [i_3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 13721308357251255670ULL)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -3)) ? (660111848) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (short)-32751)) : (((/* implicit */int) ((((/* implicit */int) arr_16 [i_2] [i_2] [i_2] [i_2])) < (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                }
            } 
        } 
    } 
    var_23 += ((/* implicit */_Bool) (-(((((4294967285U) > (((/* implicit */unsigned int) ((/* implicit */int) (short)-28820))))) ? (((((/* implicit */_Bool) 10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
    var_24 = ((/* implicit */long long int) var_12);
}
