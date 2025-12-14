/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184662
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
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_2)))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)47)), ((short)-19751)))) : (((((/* implicit */int) var_8)) - (((/* implicit */int) (_Bool)1))))))));
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) -1761721443680974558LL)) < (18446744073709551607ULL))))))) ? (((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_5)))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) : (((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (_Bool)1);
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) -1761721443680974558LL))) * (((/* implicit */int) (unsigned char)120))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 11; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                {
                    arr_12 [i_1] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(var_6)))) ? (((((/* implicit */int) var_11)) & (((/* implicit */int) var_11)))) : ((+(((/* implicit */int) (unsigned short)0))))));
                    var_14 = (unsigned short)20982;
                    arr_13 [(signed char)2] [i_2] [i_2] [i_1] = ((/* implicit */long long int) ((signed char) (!(((/* implicit */_Bool) arr_0 [i_1] [i_2])))));
                }
            } 
        } 
        arr_14 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_6) / (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) (short)32756)) : ((+(((/* implicit */int) (_Bool)1))))));
        /* LoopSeq 1 */
        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) (unsigned short)44554))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (short)437))))) : ((((_Bool)1) ? (((/* implicit */int) (unsigned char)43)) : (((/* implicit */int) (unsigned short)34970))))));
            var_16 = ((/* implicit */unsigned char) (_Bool)1);
            arr_18 [i_1] = ((/* implicit */_Bool) var_9);
        }
        arr_19 [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)437)) : (((/* implicit */int) var_3)))) % (((/* implicit */int) var_8))));
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 11; i_5 += 3) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_26 [i_1] [i_1] [i_1] [i_1] = var_9;
                    arr_27 [i_1] [i_5] [i_6] [i_1] = ((/* implicit */unsigned short) ((_Bool) (-(((/* implicit */int) arr_15 [i_1] [i_1] [i_1])))));
                    var_17 = ((/* implicit */unsigned char) arr_0 [i_1] [i_5]);
                }
            } 
        } 
    }
    var_18 += ((/* implicit */_Bool) var_5);
}
