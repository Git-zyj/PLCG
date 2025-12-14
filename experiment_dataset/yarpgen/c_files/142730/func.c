/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142730
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
    var_15 = ((/* implicit */unsigned int) ((unsigned char) ((((long long int) var_7)) >> (((/* implicit */int) ((((/* implicit */int) var_9)) == (((/* implicit */int) (unsigned short)32784))))))));
    var_16 = ((/* implicit */short) (((((~(-2147483617))) & ((~(var_8))))) << (((/* implicit */int) (!(((/* implicit */_Bool) max((1803522853), (var_8)))))))));
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (var_14) : (((/* implicit */long long int) (~(((var_10) >> (((var_8) - (1984326559))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 24; i_2 += 3) 
                {
                    for (unsigned char i_3 = 1; i_3 < 23; i_3 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min(((~(-1662975102))), (((/* implicit */int) (!(((/* implicit */_Bool) 4079478782U))))))))));
                            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) ((arr_8 [i_0] [i_1] [i_0] [i_3] [i_0]) > (((/* implicit */unsigned int) arr_5 [(unsigned short)20] [i_1]))))) >= ((-(var_3)))))))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */short) ((((arr_7 [i_0] [i_0] [i_0] [i_0]) != (var_4))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_7 [i_0] [i_1] [i_0] [i_1])))) : (min((arr_7 [i_0] [i_1] [i_0] [i_1]), (((/* implicit */unsigned int) arr_0 [i_0]))))));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (signed char i_5 = 2; i_5 < 24; i_5 += 1) 
                    {
                        {
                            var_21 -= ((/* implicit */unsigned char) ((unsigned int) max((((/* implicit */int) ((((/* implicit */int) arr_2 [i_1] [i_1])) == (arr_0 [i_0])))), (((int) 5123352314293765817LL)))));
                            var_22 = ((/* implicit */short) arr_7 [i_0] [i_1] [i_1] [i_1]);
                            arr_17 [i_4] [i_1] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) 1662975105))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))) : ((-(arr_5 [i_1] [i_1])))));
                            arr_18 [i_0] [i_1] [i_4] [i_5] [i_1] = -224116984;
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    for (short i_7 = 3; i_7 < 21; i_7 += 4) 
                    {
                        {
                            arr_24 [i_6] [i_1] [i_6] [i_0] = (i_1 % 2 == 0) ? (((/* implicit */unsigned int) min((((unsigned long long int) (+(var_2)))), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) arr_2 [i_0] [i_1])) << (((arr_12 [i_0] [i_1]) + (409538584)))))))))) : (((/* implicit */unsigned int) min((((unsigned long long int) (+(var_2)))), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) arr_2 [i_0] [i_1])) << (((((arr_12 [i_0] [i_1]) + (409538584))) + (1650715187))))))))));
                            var_23 |= min((arr_5 [4ULL] [4ULL]), (((/* implicit */int) ((_Bool) arr_4 [i_1] [(short)0]))));
                            arr_25 [i_0] [i_1] [i_6] [i_7 - 3] = arr_7 [i_0] [i_1] [i_6] [i_7 + 2];
                            arr_26 [i_0] [(short)22] [i_6] [i_7 - 1] |= ((/* implicit */signed char) (-(0U)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 &= ((/* implicit */unsigned long long int) ((int) max((var_1), (((/* implicit */int) ((short) 4294967290U))))));
}
