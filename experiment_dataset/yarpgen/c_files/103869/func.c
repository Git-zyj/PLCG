/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103869
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_14 = 7206914747188793186LL;
                    var_15 = ((/* implicit */unsigned short) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) 6889186479607988217LL))))), (var_2)));
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */short) ((6889186479607988217LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)239)))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */long long int) ((((/* implicit */int) max((var_2), (var_2)))) | (((/* implicit */int) var_12))));
    /* LoopSeq 1 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            for (unsigned int i_5 = 0; i_5 < 20; i_5 += 3) 
            {
                for (long long int i_6 = 0; i_6 < 20; i_6 += 4) 
                {
                    {
                        var_17 = ((/* implicit */unsigned int) (((~(((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))) + ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
                        arr_18 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) var_5);
                        var_18 = ((/* implicit */unsigned short) (~(var_3)));
                        arr_19 [i_6] [i_3] [i_3] [i_3] = (unsigned char)255;
                        var_19 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)11))));
                    }
                } 
            } 
        } 
        arr_20 [i_3] = ((/* implicit */signed char) ((((((/* implicit */int) ((arr_13 [i_3] [i_3] [i_3]) <= (var_3)))) * (((/* implicit */int) ((((/* implicit */int) arr_9 [i_3])) < (((/* implicit */int) arr_9 [i_3]))))))) & (((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3]))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3]))))))));
        var_20 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) var_9)) ^ (((/* implicit */int) arr_9 [i_3])))), (((/* implicit */int) max((arr_10 [i_3] [i_3]), (arr_10 [i_3] [i_3]))))));
    }
}
