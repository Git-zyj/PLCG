/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167214
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
    var_13 = ((/* implicit */unsigned short) var_9);
    var_14 += ((/* implicit */long long int) 35184372072448ULL);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) min((-2374959103000108983LL), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) (unsigned char)211))))))))));
                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((0U) << (((((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) - (15567845403137479866ULL))) - (12102270707426847541ULL))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 3) 
    {
        for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            for (unsigned char i_4 = 1; i_4 < 11; i_4 += 3) 
            {
                {
                    var_17 ^= ((/* implicit */unsigned int) max((min((((((/* implicit */_Bool) (unsigned short)62326)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-4579023690189171134LL))), (((/* implicit */long long int) arr_2 [i_2])))), (((/* implicit */long long int) ((unsigned char) max((((/* implicit */long long int) (_Bool)1)), (878146245664843250LL)))))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 2; i_6 < 11; i_6 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) (_Bool)1);
                                arr_16 [i_6] [i_6] [i_6] [i_4] [i_6] = ((/* implicit */unsigned char) var_2);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
