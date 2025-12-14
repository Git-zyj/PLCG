/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169306
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
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 2) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) arr_3 [i_0 + 1])) | (var_16))));
        /* LoopNest 3 */
        for (short i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 23; i_3 += 4) 
                {
                    {
                        var_17 = ((/* implicit */int) -8634681778126510762LL);
                        arr_15 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */long long int) arr_8 [i_1]);
                        var_18 = ((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)255)))) + (((((((/* implicit */int) var_5)) == (-1481461364))) ? (((((/* implicit */int) (unsigned char)20)) | (((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [i_3])))) : ((-(1246587226)))))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0 - 2] [(_Bool)1])) ? (var_8) : (((/* implicit */long long int) var_1)))));
    }
    for (unsigned long long int i_4 = 2; i_4 < 21; i_4 += 2) /* same iter space */
    {
        arr_19 [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(max((((/* implicit */unsigned int) (_Bool)1)), (230521486U))))))));
        arr_20 [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((int) var_4))), (var_6)))) ? (min((1898438892674960732LL), (((/* implicit */long long int) (signed char)122)))) : (((/* implicit */long long int) ((((var_9) <= (((/* implicit */long long int) arr_5 [(unsigned char)14] [(unsigned char)14] [i_4])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) : (((unsigned int) -1246587240)))))));
        arr_21 [i_4] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((_Bool) arr_14 [i_4])))))));
    }
    var_20 = ((/* implicit */_Bool) var_3);
    var_21 = ((/* implicit */unsigned char) -1656740302702237958LL);
}
