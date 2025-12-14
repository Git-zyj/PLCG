/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178551
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
    var_16 = ((/* implicit */unsigned int) ((unsigned char) -2676206308901701739LL));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((short) ((((/* implicit */_Bool) var_10)) ? (max((((/* implicit */long long int) (short)1694)), (3710758168127440523LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 1195444030U))))))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        var_18 += ((/* implicit */long long int) max((((/* implicit */unsigned short) (unsigned char)208)), ((unsigned short)0)));
                        arr_15 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) ? (1164931063) : (((/* implicit */int) (unsigned char)127))))) & (-2974869678395826267LL)))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) -1191146208))))))) : (((/* implicit */int) ((6972851549133477322LL) < (((/* implicit */long long int) ((/* implicit */int) (signed char)-114))))))));
                    }
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-((+(((/* implicit */int) var_11))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)16)) - (var_10)))) ? ((-(((/* implicit */int) (signed char)29)))) : (((((/* implicit */int) (unsigned short)3752)) + (((/* implicit */int) var_9)))))) : ((-(((((/* implicit */_Bool) (unsigned char)3)) ? (630648728) : (-1263022308)))))));
                }
            } 
        } 
    } 
    var_20 = min((((/* implicit */long long int) ((int) min((14018969119192869963ULL), (((/* implicit */unsigned long long int) (_Bool)0)))))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)166)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))))) : ((+(var_8))))));
}
