/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103249
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
    var_17 = ((/* implicit */short) ((var_11) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((-8044262129624778921LL) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 864796603902247484ULL)) ? (2106456881) : (((/* implicit */int) (short)-20079))));
                    arr_10 [(unsigned char)16] [i_0] [(unsigned char)16] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned int) 5823319361522241565LL)))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            for (unsigned char i_5 = 0; i_5 < 12; i_5 += 1) 
            {
                {
                    arr_20 [i_3] [i_3] = ((/* implicit */unsigned short) ((2106456861) / (-1064254987)));
                    arr_21 [i_3] [i_4] [i_5] = ((/* implicit */int) max((min((((/* implicit */unsigned int) max(((short)20079), (((/* implicit */short) (unsigned char)211))))), (521545209U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_4])) / (((((/* implicit */_Bool) (short)10296)) ? (1407152654) : (-1438370160))))))));
                    var_19 = ((/* implicit */unsigned short) ((unsigned int) 3291733938364244LL));
                }
            } 
        } 
    } 
}
