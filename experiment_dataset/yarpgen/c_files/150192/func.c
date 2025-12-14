/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150192
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
    var_12 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 16)) ? (-16) : (-17)));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                arr_16 [i_0] [i_1] [i_1] [i_3] [i_2] [i_3] [10LL] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1286819233471355388LL)) ? (-16) : (((/* implicit */int) (signed char)-39))))) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)-69)) : (38))) : (((((/* implicit */_Bool) -6)) ? (9) : (((/* implicit */int) (unsigned short)1))))));
                                arr_17 [i_0 + 1] [i_0 + 1] [i_0] [i_3] [0U] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(16)))) ? ((~(((/* implicit */int) (short)8190)))) : (((((/* implicit */_Bool) (signed char)-49)) ? (19) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) (signed char)38)) : ((~(((/* implicit */int) (short)-31882))))));
                            }
                            for (unsigned short i_5 = 0; i_5 < 13; i_5 += 1) /* same iter space */
                            {
                                arr_20 [i_0] [(unsigned short)0] [(signed char)12] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1587268554U)) ? (((/* implicit */long long int) 3U)) : (576460752303423487LL)))) ? (-4406880157654415742LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-37)))))) ? (((((/* implicit */_Bool) (short)-31878)) ? (-17) : (((/* implicit */int) (signed char)-22)))) : (((((/* implicit */_Bool) 3649921880U)) ? (((((/* implicit */_Bool) 43)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) (unsigned short)0))))));
                                var_13 = ((/* implicit */_Bool) (signed char)65);
                                arr_21 [i_0] [i_0] [i_2] [i_3] [i_5] [5U] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */int) (short)8190)) : (((/* implicit */int) (signed char)-38))))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)13))));
                            }
                            /* vectorizable */
                            for (unsigned short i_6 = 0; i_6 < 13; i_6 += 1) /* same iter space */
                            {
                                arr_25 [i_0] = (unsigned short)0;
                                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (~((~(((/* implicit */int) (short)-9323)))))))));
                            }
                            for (unsigned char i_7 = 0; i_7 < 13; i_7 += 2) 
                            {
                                arr_28 [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) (+(-1555066265104971856LL)));
                                var_15 *= ((/* implicit */short) ((((/* implicit */_Bool) 645045415U)) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)29))) : (2305772640469516288LL))) : ((~(2234902555208097433LL)))));
                            }
                            arr_29 [i_3] [i_0] [i_1] [i_0] [i_0] = (_Bool)1;
                            arr_30 [1ULL] [i_1] [i_2] [i_0] = (_Bool)1;
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) (short)-8165);
}
