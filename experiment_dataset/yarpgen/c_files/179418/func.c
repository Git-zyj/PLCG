/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179418
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
    for (signed char i_0 = 4; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)1))))), (70368744177663LL))));
        arr_3 [i_0 - 3] = ((/* implicit */unsigned int) min((((unsigned short) 0LL)), (((/* implicit */unsigned short) min(((unsigned char)7), ((unsigned char)89))))));
    }
    for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(1302254497481736795LL)))) ? (((31LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)174))))) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((unsigned char) (-(((/* implicit */int) (unsigned char)82))))))));
        arr_6 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) -6094822681532122042LL))) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) (unsigned char)89)) | (((/* implicit */int) (unsigned char)0))))));
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (short i_3 = 4; i_3 < 15; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 1; i_4 < 15; i_4 += 1) 
                {
                    {
                        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)1))))) % (((((/* implicit */_Bool) -6094822681532122035LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)91))) : (2391461167U)))));
                        var_14 = ((/* implicit */unsigned long long int) ((unsigned int) ((_Bool) (~(7044152642795294468LL)))));
                        var_15 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (short)29060)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)82)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25870))) - (536870911U))))));
                    }
                } 
            } 
        } 
    }
    var_16 = (unsigned char)89;
    var_17 = ((/* implicit */unsigned char) ((short) ((long long int) ((signed char) (unsigned char)237))));
    var_18 &= var_6;
    var_19 = var_5;
}
