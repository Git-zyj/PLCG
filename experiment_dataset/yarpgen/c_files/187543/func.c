/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187543
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
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (-(var_7))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((7559833567609688748ULL) < (((/* implicit */unsigned long long int) -796540817)))))));
        var_14 = ((/* implicit */unsigned long long int) (+((-(796540818)))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            for (short i_3 = 3; i_3 < 8; i_3 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min(((+(((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)7970))))))))));
                    arr_13 [i_1 + 1] [i_2] [i_1 + 1] [i_1 + 1] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)32704)), (-796540817))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 12; i_5 += 1) 
            {
                for (short i_6 = 1; i_6 < 10; i_6 += 2) 
                {
                    {
                        var_16 = (+(((/* implicit */int) (!(((/* implicit */_Bool) 7304556794481216114ULL))))));
                        arr_20 [i_1] [i_1] [i_1] [i_1] [(short)0] [i_1] = ((/* implicit */short) min(((~((+(8465507865559971231ULL))))), (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (short)-3954)))), ((-(-1056481005))))))));
                    }
                } 
            } 
        } 
    }
    var_17 = max(((-(11137245296304560180ULL))), (((/* implicit */unsigned long long int) ((1352600858) / (706177067)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)27)), ((unsigned short)32831))))));
        arr_23 [i_7] [i_7] = ((/* implicit */_Bool) min(((-(((/* implicit */int) (unsigned char)87)))), ((+(((/* implicit */int) (unsigned char)228))))));
        var_19 = ((/* implicit */unsigned long long int) max(((-(((1056481034) % (((/* implicit */int) (unsigned short)54960)))))), (max(((+(((/* implicit */int) (unsigned char)216)))), (((/* implicit */int) (short)-7485))))));
        arr_24 [i_7] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(max((1250705254275279266ULL), (((/* implicit */unsigned long long int) (unsigned char)0)))))))));
        arr_25 [i_7] = ((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)21956)) / (-1152775789)))) < (max((18446744073709551593ULL), (((/* implicit */unsigned long long int) (short)-21945)))));
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 1) /* same iter space */
    {
        var_20 = (short)21956;
        var_21 = ((/* implicit */short) (!((!(((/* implicit */_Bool) (unsigned short)54945))))));
        arr_29 [i_8] = ((/* implicit */short) (!((_Bool)0)));
    }
}
