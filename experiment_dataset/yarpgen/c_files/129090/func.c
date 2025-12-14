/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129090
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
    var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) (!(((((/* implicit */long long int) (+(((/* implicit */int) var_7))))) != ((-(1721759282444968735LL))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                var_12 -= ((/* implicit */short) (-(var_5)));
                arr_4 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)223))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2))))) | (((((/* implicit */long long int) arr_3 [i_1 - 1] [i_1] [i_1])) + (5118841671720328066LL)))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_2 = 1; i_2 < 10; i_2 += 3) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_5 [i_2 + 1] [i_2 - 1]);
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned long long int) var_1);
        arr_11 [8U] &= ((/* implicit */short) (-(17)));
        arr_12 [i_2] = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)17442))) <= (var_6))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (((unsigned long long int) (unsigned char)145))));
        arr_13 [i_2] = ((/* implicit */long long int) (((~((~(var_8))))) <= ((+(((/* implicit */int) var_3))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_17 [i_3] = ((/* implicit */unsigned int) (((~(var_8))) > (((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (signed char)-99))))));
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) 
        {
            for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) 
            {
                {
                    var_13 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(14797185678449534722ULL)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)3)) < (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) ((unsigned short) -7162070139218189084LL)))));
                    arr_23 [i_3] [i_3] [(short)11] = ((/* implicit */short) (~(((/* implicit */int) ((signed char) arr_1 [i_4])))));
                }
            } 
        } 
        var_14 |= ((/* implicit */unsigned int) (+(((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_3] [(short)10]))) + (9223372036854775790LL)))));
    }
}
