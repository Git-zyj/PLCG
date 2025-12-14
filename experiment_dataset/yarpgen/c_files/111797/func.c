/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111797
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 4) /* same iter space */
    {
        var_11 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (9ULL))))));
        var_12 = ((/* implicit */unsigned int) (_Bool)1);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 4) /* same iter space */
    {
        var_13 = ((/* implicit */short) ((unsigned char) arr_0 [i_1 + 2]));
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
            {
                for (short i_4 = 4; i_4 < 12; i_4 += 1) 
                {
                    {
                        var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)44)) + (((/* implicit */int) (_Bool)1))));
                        var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)5357)) - (arr_2 [i_1 + 1])));
                        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-14404))) > (-3187651841436761524LL))))));
                        var_17 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((unsigned int) arr_7 [i_1 + 3] [i_2] [i_1 + 3] [i_2]))) & (15037184088933148741ULL)));
                        var_18 = ((/* implicit */int) (unsigned short)60179);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 2; i_5 < 10; i_5 += 4) /* same iter space */
    {
        var_19 += ((/* implicit */unsigned int) (_Bool)1);
        var_20 = ((/* implicit */unsigned short) arr_1 [i_5]);
    }
    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
    {
        var_21 = ((/* implicit */short) 4294967295U);
        var_22 = ((/* implicit */short) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)8128)));
        var_23 = ((/* implicit */_Bool) arr_13 [i_6 + 1] [i_6]);
    }
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((unsigned char)26), ((unsigned char)192)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)7))))))) : (((/* implicit */int) var_4))));
    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -66341086960371293LL)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))));
    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) max((((/* implicit */short) var_9)), ((short)(-32767 - 1)))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_8)), (max((var_0), (((/* implicit */unsigned char) (_Bool)1))))))) : (((/* implicit */int) max(((short)32766), (((short) (short)-14400)))))));
}
