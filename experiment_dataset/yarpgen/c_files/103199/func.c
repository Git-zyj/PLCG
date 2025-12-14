/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103199
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */short) 2010144914);
                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) -2010144914)) ? (((/* implicit */int) (signed char)-107)) : (((/* implicit */int) (short)-5604))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) var_6);
    /* LoopSeq 1 */
    for (unsigned char i_2 = 4; i_2 < 20; i_2 += 1) 
    {
        /* LoopNest 3 */
        for (short i_3 = 3; i_3 < 20; i_3 += 3) 
        {
            for (int i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                for (unsigned short i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_6 = 3; i_6 < 18; i_6 += 2) 
                        {
                            var_19 = ((/* implicit */_Bool) arr_7 [(short)10]);
                            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) arr_5 [i_6] [i_6]))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 0; i_7 < 22; i_7 += 1) 
                        {
                            arr_20 [i_7] = ((/* implicit */signed char) (+(-2010144915)));
                            var_21 += (!(((/* implicit */_Bool) 0LL)));
                        }
                        arr_21 [i_2] [1] [1] [i_3] [18LL] [i_2] = (~((~(((/* implicit */int) (_Bool)1)))));
                    }
                } 
            } 
        } 
        arr_22 [i_2] = ((/* implicit */int) (~(max(((~(arr_5 [i_2] [i_2]))), (((/* implicit */long long int) (+(-2010144914))))))));
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-21765))))) ? (448520624U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)3813)))))))))));
    }
}
