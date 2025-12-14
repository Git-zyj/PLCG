/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127444
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        {
                            arr_13 [i_1] = ((/* implicit */signed char) ((short) ((((/* implicit */int) arr_12 [i_0] [(unsigned char)9] [i_0] [i_0] [i_0] [i_0])) >= (((((/* implicit */int) arr_0 [i_0])) % (((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_2] [i_3] [i_0])))))));
                            arr_14 [i_1] [i_1] [(short)2] [i_3] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_5 [i_3])))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-14725)) ? (((/* implicit */int) (unsigned short)65532)) : (((/* implicit */int) (signed char)108))));
                var_19 = ((/* implicit */unsigned char) ((((_Bool) ((unsigned char) (unsigned char)193))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (var_11)))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1] [i_1])) && (((/* implicit */_Bool) (unsigned char)12))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)27465)))))))));
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (~(((((/* implicit */int) (unsigned char)166)) | (((/* implicit */int) arr_2 [i_1] [i_1])))))))));
                arr_15 [i_1] [i_1] = ((/* implicit */unsigned char) ((max((-5943552646675445944LL), (var_1))) & (((/* implicit */long long int) (~(((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [i_1])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_4 = 2; i_4 < 8; i_4 += 4) 
    {
        for (unsigned char i_5 = 1; i_5 < 9; i_5 += 4) 
        {
            {
                arr_22 [i_4] [i_5] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_0))) + (((min((((/* implicit */long long int) var_0)), (arr_10 [i_4] [i_4] [i_5] [i_4] [i_4] [i_4]))) - (((/* implicit */long long int) ((((/* implicit */int) arr_3 [(_Bool)1])) * (((/* implicit */int) var_16)))))))));
                arr_23 [i_5] [i_5] [i_4] = ((/* implicit */unsigned short) (((!((!((_Bool)1))))) ? (((((/* implicit */int) (short)31921)) >> (((-6717985971591077745LL) + (6717985971591077765LL))))) : (((/* implicit */int) arr_17 [i_4] [i_5]))));
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) (unsigned short)36202))))));
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((long long int) (short)32756)), (((/* implicit */long long int) arr_9 [i_4] [i_5] [i_6] [i_7]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_6 [i_5 + 1] [i_4 - 2] [i_4] [i_4])))) : (max((max((-4954539483559038463LL), (((/* implicit */long long int) arr_24 [i_4] [(signed char)7] [i_6] [i_4])))), (((/* implicit */long long int) ((short) (_Bool)0))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)54469)) - (((/* implicit */int) (unsigned char)254))));
    var_24 *= ((/* implicit */signed char) ((_Bool) (unsigned short)41944));
}
