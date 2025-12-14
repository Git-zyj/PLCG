/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142543
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
    var_16 = ((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) var_14))))))));
    var_17 = ((/* implicit */short) var_10);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                for (long long int i_3 = 2; i_3 < 17; i_3 += 1) 
                {
                    {
                        var_18 += ((/* implicit */unsigned short) arr_3 [i_3] [i_3] [i_3 + 3]);
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-26589)) >= (((/* implicit */int) (short)-24139))));
                        var_20 |= ((/* implicit */unsigned short) var_13);
                        arr_10 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)1674)) ? (((/* implicit */int) ((unsigned short) (short)8191))) : (((/* implicit */int) (unsigned short)9130)))) * (min((((((/* implicit */int) (short)-8192)) - (((/* implicit */int) (unsigned char)116)))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-5554))))))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] [i_0] = arr_3 [i_0] [i_0] [i_0];
    }
    var_21 ^= ((/* implicit */signed char) var_11);
    /* LoopNest 3 */
    for (signed char i_4 = 0; i_4 < 22; i_4 += 1) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (-((+(((((/* implicit */int) arr_12 [(signed char)16])) * (((/* implicit */int) (short)-8192)))))))))));
                    arr_21 [i_4] = ((/* implicit */_Bool) var_8);
                }
            } 
        } 
    } 
}
