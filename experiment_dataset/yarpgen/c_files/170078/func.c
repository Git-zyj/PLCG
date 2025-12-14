/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170078
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
    var_11 &= ((/* implicit */short) (~(((/* implicit */int) ((_Bool) (signed char)-17)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_8 [i_1] [i_0] = ((/* implicit */unsigned int) ((signed char) (_Bool)1));
                /* LoopNest 2 */
                for (long long int i_2 = 3; i_2 < 9; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) max((max((-2038712623), (((/* implicit */int) (unsigned short)28)))), (((/* implicit */int) (_Bool)1))));
                            arr_14 [6ULL] [i_1] [i_2 - 3] [i_2 - 1] [i_3] [i_3] = ((/* implicit */short) max((((((/* implicit */_Bool) -7196259542742146980LL)) ? (3404482980096692354ULL) : (15251813359810248550ULL))), (((/* implicit */unsigned long long int) (short)-1024))));
                        }
                    } 
                } 
                var_12 = ((/* implicit */short) ((((((((/* implicit */_Bool) arr_9 [i_1] [(signed char)0] [i_0])) ? (((/* implicit */int) (signed char)-113)) : (((/* implicit */int) arr_0 [(_Bool)1])))) * (((/* implicit */int) (_Bool)1)))) > (((((/* implicit */int) (signed char)-16)) % (((/* implicit */int) arr_3 [i_0] [i_1]))))));
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) var_7);
    /* LoopSeq 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_14 = ((/* implicit */signed char) arr_16 [(signed char)18] [20LL]);
        var_15 = ((/* implicit */signed char) (_Bool)1);
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)25))) + (2778276366212047424ULL))))))));
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 24; i_6 += 3) 
        {
            for (signed char i_7 = 0; i_7 < 24; i_7 += 3) 
            {
                {
                    var_17 = max((arr_21 [i_6]), (((/* implicit */signed char) (_Bool)1)));
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 24; i_8 += 3) 
                    {
                        for (long long int i_9 = 1; i_9 < 23; i_9 += 4) 
                        {
                            {
                                arr_31 [i_7] [i_6] [i_7] [i_8] = ((/* implicit */_Bool) ((short) ((_Bool) 3194930713899303095ULL)));
                                arr_32 [i_7] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65496))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
