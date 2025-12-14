/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182568
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
    var_17 = ((/* implicit */unsigned char) ((0ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)112)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_18 ^= ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (short)-10799)) : (((/* implicit */int) (short)0))))), (((18246012883905812229ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1939648110)) ? (((/* implicit */int) (unsigned short)16383)) : (((/* implicit */int) (short)-457))))) ? (((((/* implicit */_Bool) 3480323097790224419LL)) ? (((/* implicit */int) (unsigned short)50122)) : (947336951))) : (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (short)-32765)))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_19 *= ((/* implicit */short) ((((((/* implicit */int) (unsigned short)45093)) * (((/* implicit */int) (_Bool)0)))) >= (((/* implicit */int) ((1272309594597176030ULL) <= (((/* implicit */unsigned long long int) -1LL)))))));
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)48)) || ((_Bool)0))))));
                        var_21 *= ((/* implicit */unsigned char) ((2662285263875161392ULL) % (((/* implicit */unsigned long long int) 7126945318679198675LL))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        for (unsigned int i_5 = 3; i_5 < 23; i_5 += 2) 
                        {
                            {
                                arr_15 [i_0] = ((/* implicit */short) max((min((((/* implicit */unsigned long long int) (signed char)-42)), (9223372036586340352ULL))), (4008387381773089019ULL)));
                                var_22 = ((/* implicit */int) (unsigned char)1);
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0] = min((((/* implicit */short) ((15484193975154456307ULL) == (4361278685006171083ULL)))), (max(((short)20456), ((short)31))));
                    arr_17 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */int) ((11284927490933187165ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)255)))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) >> (((-1) + (6)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)28)) > (-1352835886))))) : (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (_Bool)0)))))), (((/* implicit */unsigned long long int) max((max((((/* implicit */short) (unsigned char)80)), ((short)22272))), (((/* implicit */short) ((((/* implicit */int) (short)26046)) <= (((/* implicit */int) (unsigned char)122)))))))))))));
}
