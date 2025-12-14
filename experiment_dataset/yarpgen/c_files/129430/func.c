/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129430
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            var_13 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)1023)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : ((-9223372036854775807LL - 1LL)))) > (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (short)-14622))))));
            var_14 = ((/* implicit */short) (!((!(((/* implicit */_Bool) (short)-1024))))));
            var_15 &= ((/* implicit */_Bool) (+(max((((((((/* implicit */int) var_7)) + (2147483647))) << (((((/* implicit */int) (signed char)81)) - (81))))), (((/* implicit */int) (_Bool)0))))));
        }
        /* vectorizable */
        for (unsigned char i_2 = 2; i_2 < 20; i_2 += 3) 
        {
            var_16 -= ((/* implicit */short) ((signed char) (unsigned short)1));
            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_2 + 1] [i_2 + 1])) ? (((/* implicit */int) (unsigned short)8190)) : (((/* implicit */int) (signed char)81))));
            arr_7 [i_0] = ((/* implicit */unsigned int) ((var_5) + (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) * (((/* implicit */int) (short)20575)))))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_3 = 4; i_3 < 19; i_3 += 2) 
        {
            var_18 *= ((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) (short)4492)) + (((/* implicit */int) var_8)))));
            /* LoopSeq 1 */
            for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
            {
                var_19 = ((/* implicit */unsigned short) (unsigned char)0);
                var_20 = ((/* implicit */short) (signed char)81);
            }
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [i_0] [i_3 + 2]) > (1309938352U))))) > (1918042374310076810ULL)));
        }
        var_22 = (short)-4493;
        arr_12 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) var_11))) <= (max((((/* implicit */int) (_Bool)1)), (var_6)))));
    }
    var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) 2048013082U))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_5 = 0; i_5 < 21; i_5 += 3) 
    {
        var_24 = ((/* implicit */int) ((unsigned long long int) (unsigned short)55381));
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)124)) << (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
        var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)29933))));
        var_27 = ((/* implicit */unsigned short) (~(4294967288U)));
        arr_17 [i_5] = ((/* implicit */unsigned long long int) ((4294967281U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_5])))));
    }
    var_28 = ((/* implicit */unsigned char) 16528701699399474812ULL);
    var_29 = ((/* implicit */_Bool) 1754709119);
}
