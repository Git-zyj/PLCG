/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109450
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
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_4 [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))) ^ (((5270474339250586271ULL) & (5215303087938871211ULL)))));
                var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((var_0) < (((/* implicit */long long int) ((/* implicit */int) var_5)))))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */signed char) (+(((/* implicit */int) var_4))));
    /* LoopNest 2 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (unsigned short i_3 = 2; i_3 < 22; i_3 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (long long int i_5 = 1; i_5 < 21; i_5 += 2) 
                    {
                        {
                            arr_16 [i_2] [i_2 - 1] [i_2] [i_2] = ((/* implicit */_Bool) var_8);
                            var_13 += ((/* implicit */signed char) var_9);
                        }
                    } 
                } 
                arr_17 [i_2 - 1] [i_3 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) var_6)))))) || (((/* implicit */_Bool) (((-(((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) ((((/* implicit */int) (short)-28192)) > (((/* implicit */int) (signed char)-17))))))))));
                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)8546)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))))) ? ((-((-(((/* implicit */int) var_7)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                var_15 = (+((-(15028141453148658077ULL))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_6 = 3; i_6 < 22; i_6 += 2) 
    {
        var_16 &= ((/* implicit */int) var_3);
        var_17 = ((/* implicit */unsigned int) var_1);
    }
    for (unsigned char i_7 = 0; i_7 < 15; i_7 += 2) 
    {
        arr_25 [i_7] = ((/* implicit */unsigned short) (((!((!(((/* implicit */_Bool) (unsigned char)226)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_10)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
        arr_26 [i_7] [i_7] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (short)28192)), ((~(((((/* implicit */int) (unsigned char)222)) ^ (((/* implicit */int) var_2))))))));
    }
    /* vectorizable */
    for (unsigned short i_8 = 0; i_8 < 12; i_8 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 6228874948543220454ULL))));
        arr_30 [(_Bool)1] = ((/* implicit */short) ((int) (~(((/* implicit */int) var_7)))));
        var_19 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) var_5))))));
        var_20 = ((/* implicit */signed char) -111990118);
        var_21 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_8))))));
    }
    var_22 = ((/* implicit */unsigned int) (((!((!(((/* implicit */_Bool) (short)32766)))))) ? (var_3) : (((/* implicit */unsigned long long int) var_6))));
}
