/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150707
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) != (4619674217609694361ULL)));
    var_13 -= ((/* implicit */unsigned int) (+((~(((unsigned long long int) -5049047433501934432LL))))));
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((long long int) (-2147483647 - 1))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_15 = min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((int) (short)(-32767 - 1)))), (((long long int) var_2))))), ((-(4619674217609694361ULL))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                for (unsigned int i_3 = 1; i_3 < 15; i_3 += 2) 
                {
                    {
                        arr_10 [i_0] [i_1 - 1] [i_2] [i_3] [i_3] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) 437810992)), (2406198310347249998ULL)))))) ? (((unsigned long long int) 831677792U)) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 4294967295U)), (-1LL))))));
                        var_16 = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((((/* implicit */int) (short)1)), (var_11)))) ? (max((4619674217609694387ULL), (((/* implicit */unsigned long long int) 562795695U)))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) var_7)), (var_11)))))) / (((/* implicit */unsigned long long int) ((unsigned int) (-(914393439)))))));
                        var_17 -= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-2048)), (18446744073709551615ULL)))))))) % ((+(var_10)))));
                        arr_11 [i_0] [i_0] [i_3] [i_0] [i_0] = var_9;
                        var_18 = ((/* implicit */signed char) -608016226);
                    }
                } 
            } 
        } 
        arr_12 [i_0] = ((/* implicit */unsigned long long int) ((int) max((((/* implicit */unsigned long long int) (signed char)-104)), (18446744073709551596ULL))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) 
    {
        /* LoopNest 3 */
        for (short i_5 = 0; i_5 < 19; i_5 += 2) 
        {
            for (int i_6 = 0; i_6 < 19; i_6 += 2) 
            {
                for (long long int i_7 = 0; i_7 < 19; i_7 += 4) 
                {
                    {
                        arr_21 [i_4] [i_4] [i_7] = ((/* implicit */short) min((min((13827069856099857234ULL), (9040080644234249330ULL))), (((((/* implicit */_Bool) 7010321881708760760LL)) ? (max((((/* implicit */unsigned long long int) 1584258943)), (7403982742009799492ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (signed char)-65)) : (((/* implicit */int) (signed char)30)))))))));
                        var_19 = ((/* implicit */long long int) (-((-(11390224457811173832ULL)))));
                    }
                } 
            } 
        } 
        var_20 &= max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (-1421707874) : (1421707874)))), (min((1042985345U), (54733598U))));
    }
}
