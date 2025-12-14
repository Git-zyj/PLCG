/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117288
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
    for (unsigned long long int i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 2; i_1 < 24; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                for (unsigned int i_3 = 1; i_3 < 22; i_3 += 1) 
                {
                    {
                        arr_13 [i_0] [i_3] [10U] [i_3] = ((/* implicit */short) ((((/* implicit */int) (short)-16224)) >= (((/* implicit */int) (short)-16210))));
                        arr_14 [(short)22] [i_2] [i_2] [i_2] [i_2] [i_3] = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) (short)-16224))))), (((((/* implicit */_Bool) 368631504U)) ? (((/* implicit */int) arr_10 [i_3] [i_3 + 3] [i_2] [i_0 + 1])) : (((/* implicit */int) arr_10 [i_3] [i_3 - 1] [i_2] [i_0 + 1]))))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned char i_5 = 0; i_5 < 25; i_5 += 3) 
                {
                    for (long long int i_6 = 0; i_6 < 25; i_6 += 1) 
                    {
                        {
                            arr_22 [i_0] [i_0] [(short)9] [i_1] [i_5] [i_0] [i_6] = ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1 - 1] [i_5]))))), ((~((-(((/* implicit */int) (short)-16245))))))));
                            arr_23 [i_0 - 1] [i_1 - 1] [i_5] [i_5] [i_5] [i_6] = ((/* implicit */signed char) var_14);
                        }
                    } 
                } 
            } 
            arr_24 [i_0] = ((/* implicit */unsigned char) ((unsigned int) max((((/* implicit */long long int) (-(((/* implicit */int) (signed char)-1))))), (max((-9223372036854775798LL), (((/* implicit */long long int) (signed char)-9)))))));
        }
        arr_25 [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)62672)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) arr_0 [i_0]))))) || (((/* implicit */_Bool) ((unsigned long long int) arr_17 [i_0]))))))) : (max((((/* implicit */unsigned int) (short)-10743)), (1622519353U)))));
        var_17 = ((/* implicit */unsigned short) ((unsigned int) (+(max((((/* implicit */long long int) (unsigned char)89)), (var_14))))));
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_18 = ((/* implicit */unsigned int) (-(7459700261112153594LL)));
        arr_28 [i_7] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_17 [i_7]))));
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned short)1474)))))));
        arr_29 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned char)255))));
    }
    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)24)))))));
    var_21 = ((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned char)239))));
    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))))));
    /* LoopNest 2 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        for (signed char i_9 = 3; i_9 < 10; i_9 += 4) 
        {
            {
                arr_35 [i_9] = ((/* implicit */unsigned short) -9223372036854775804LL);
                var_23 = ((/* implicit */unsigned int) max((var_23), (((max(((_Bool)0), ((_Bool)1))) ? ((-(0U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46592)))))));
                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) arr_26 [(short)10] [(short)10]))));
            }
        } 
    } 
}
