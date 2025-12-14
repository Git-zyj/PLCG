/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119688
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) max((((/* implicit */unsigned short) ((_Bool) ((unsigned short) var_12)))), (min(((unsigned short)45095), (((/* implicit */unsigned short) var_0)))))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) max((max(((unsigned short)18297), (var_9))), (((/* implicit */unsigned short) var_8)))))) - (var_4)));
        arr_3 [i_0] = ((/* implicit */short) ((unsigned short) (signed char)55));
        var_17 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((var_11) & (((/* implicit */int) var_3)))))))) + (((/* implicit */int) (short)-15669))));
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        arr_6 [(unsigned char)8] [i_1] = ((/* implicit */unsigned short) ((((long long int) ((((/* implicit */int) (unsigned short)20441)) / (((/* implicit */int) (short)18722))))) * (((/* implicit */long long int) ((((((/* implicit */int) (signed char)-61)) / (-60430538))) * (((/* implicit */int) ((unsigned char) (unsigned short)47239))))))));
        arr_7 [(signed char)0] [i_1] &= (_Bool)0;
    }
    for (int i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        arr_11 [(unsigned short)4] [i_2] = ((/* implicit */unsigned char) 2441490385U);
        var_18 += ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) == (var_11)))), (((long long int) (_Bool)1))));
        var_19 += var_14;
    }
    var_20 = ((/* implicit */unsigned char) ((int) max((((((/* implicit */int) (short)19380)) - (1259943758))), (((/* implicit */int) ((short) -60430538))))));
    var_21 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_9))));
}
