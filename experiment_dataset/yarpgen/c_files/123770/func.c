/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123770
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
    var_20 = ((/* implicit */long long int) ((signed char) ((unsigned char) var_15)));
    var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((max(((short)30720), (((/* implicit */short) (_Bool)1)))), (((/* implicit */short) ((_Bool) -274152132))))))));
    var_22 = ((/* implicit */_Bool) (((((((~(((/* implicit */int) (unsigned short)65535)))) | (((/* implicit */int) var_8)))) + (2147483647))) >> (((((/* implicit */int) ((short) (-(((/* implicit */int) (unsigned short)41367)))))) - (24155)))));
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)35768)) ^ (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (short)-30721)) | (((/* implicit */int) (unsigned short)41367))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 22; i_2 += 1) 
            {
                {
                    var_24 = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned short)35768)) / (((/* implicit */int) (unsigned short)24172)))) == (((/* implicit */int) ((((/* implicit */int) ((short) (_Bool)1))) < (((/* implicit */int) ((6115526891693751489LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25633)))))))))));
                    var_25 = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
                    var_26 *= ((/* implicit */unsigned char) min((((int) ((((/* implicit */_Bool) (unsigned char)255)) || ((_Bool)0)))), (((/* implicit */int) (unsigned char)48))));
                }
            } 
        } 
    } 
}
