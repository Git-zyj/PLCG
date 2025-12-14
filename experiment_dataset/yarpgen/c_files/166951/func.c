/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166951
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_19 = ((/* implicit */_Bool) ((unsigned short) var_10));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            arr_5 [i_1] = ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)4895))))) && (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))));
            var_20 = ((/* implicit */unsigned char) (unsigned short)60619);
            var_21 = ((/* implicit */signed char) 246958834);
            var_22 = ((/* implicit */short) max((((246958843) / (((/* implicit */int) (unsigned short)6151)))), (((((/* implicit */_Bool) -117266392)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)15517))))));
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_23 *= ((/* implicit */signed char) (+(((/* implicit */int) var_2))));
            var_24 *= ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)45)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1))) : (15936687476090446943ULL))) >> (((var_4) + (2229223011422000244LL)))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 14; i_3 += 4) 
            {
                for (short i_4 = 1; i_4 < 12; i_4 += 1) 
                {
                    {
                        var_25 = ((/* implicit */int) ((signed char) var_0));
                        arr_12 [i_0] [i_2] [i_2] [i_3] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) var_5))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((unsigned short) (_Bool)1)))));
                        arr_13 [i_0] [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)51095))));
                        arr_14 [i_0] [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) var_1);
                    }
                } 
            } 
        }
        var_26 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1)))))));
    }
    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) < (((5013220584332026125ULL) << (((((/* implicit */int) (unsigned char)97)) - (97)))))))) & (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) 970658533)) ? (var_6) : (((/* implicit */int) var_10)))) : (((/* implicit */int) var_11))))));
}
