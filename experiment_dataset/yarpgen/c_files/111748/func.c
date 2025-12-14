/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111748
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
    var_17 = ((/* implicit */long long int) var_2);
    var_18 ^= ((/* implicit */short) (+(((/* implicit */int) ((_Bool) (+(((/* implicit */int) var_10))))))));
    var_19 = ((/* implicit */short) var_7);
    var_20 ^= ((/* implicit */long long int) var_2);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)17076)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9981))) : (10038590805968558638ULL)));
        arr_4 [i_0] = ((/* implicit */unsigned char) (short)-17055);
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            var_21 ^= ((/* implicit */signed char) var_13);
            var_22 -= ((/* implicit */short) ((_Bool) arr_5 [i_1]));
        }
        for (signed char i_3 = 3; i_3 < 16; i_3 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) 
            {
                for (unsigned short i_5 = 1; i_5 < 16; i_5 += 3) 
                {
                    {
                        var_23 ^= ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)55548))));
                        var_24 = ((/* implicit */long long int) var_3);
                    }
                } 
            } 
            var_25 = ((/* implicit */unsigned int) (!(arr_1 [(unsigned char)11] [i_3 - 2])));
            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) arr_0 [i_1]))));
            var_27 ^= ((/* implicit */int) ((short) arr_11 [i_3 + 1] [i_1]));
        }
        for (unsigned long long int i_6 = 1; i_6 < 17; i_6 += 3) 
        {
            arr_22 [i_6] = ((/* implicit */int) ((((/* implicit */int) arr_10 [i_1])) <= (((/* implicit */int) arr_12 [i_6 + 1] [i_6 - 1] [i_1]))));
            var_28 &= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)9975))));
        }
        arr_23 [i_1] = ((/* implicit */int) (unsigned short)55557);
    }
}
