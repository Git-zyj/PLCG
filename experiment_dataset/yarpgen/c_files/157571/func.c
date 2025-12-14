/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157571
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
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_10 -= ((/* implicit */unsigned char) (-(-1830501108)));
                    arr_8 [i_0 - 1] [i_1] [i_0] [i_2] = ((/* implicit */unsigned short) (+(-1830501111)));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_3 = 1; i_3 < 6; i_3 += 4) 
    {
        var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) (+((-(-1830501111))))))));
        var_12 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_3] [i_3 + 3]))));
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) 
    {
        arr_16 [i_4] = ((/* implicit */unsigned char) var_7);
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (long long int i_6 = 0; i_6 < 23; i_6 += 2) 
            {
                for (int i_7 = 0; i_7 < 23; i_7 += 2) 
                {
                    {
                        var_13 &= ((/* implicit */unsigned short) ((unsigned char) (~(1830501105))));
                        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((short) 1830501094))))))));
                        arr_26 [i_4] [i_4] [i_5] [i_6] [10] &= ((/* implicit */unsigned int) ((long long int) ((((/* implicit */int) var_2)) | (((/* implicit */int) arr_12 [(signed char)3])))));
                    }
                } 
            } 
        } 
    }
}
