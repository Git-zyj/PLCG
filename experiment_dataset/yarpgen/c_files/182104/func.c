/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182104
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
    var_16 = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)-18530))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) ^ ((-(((/* implicit */int) min(((short)18507), (((/* implicit */short) arr_1 [i_0])))))))));
        var_17 = ((/* implicit */short) ((((/* implicit */int) max((min((((/* implicit */unsigned char) (signed char)-8)), (arr_1 [i_0]))), ((unsigned char)255)))) >= ((+(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)110)) : (((/* implicit */int) (signed char)4))))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) (-(1933719418)));
                    var_19 *= (unsigned char)131;
                    arr_7 [i_2] = max((((/* implicit */long long int) ((((_Bool) (_Bool)0)) ? (((/* implicit */int) arr_5 [i_0] [i_2] [i_2] [i_0])) : (((((/* implicit */_Bool) arr_5 [i_0] [i_2] [i_2] [i_2])) ? (((/* implicit */int) (short)7362)) : (((/* implicit */int) (unsigned short)23896))))))), ((+(min((511LL), (((/* implicit */long long int) (short)-32759)))))));
                }
            } 
        } 
    }
    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_4 = 4; i_4 < 10; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                for (int i_6 = 0; i_6 < 12; i_6 += 3) 
                {
                    {
                        var_20 = ((/* implicit */signed char) (-((+((+(((/* implicit */int) (short)(-32767 - 1)))))))));
                        var_21 = ((((((/* implicit */int) arr_15 [i_4] [0ULL] [i_4 + 1])) >= (((((/* implicit */_Bool) 3868623196U)) ? (((/* implicit */int) (unsigned char)110)) : (1572745529))))) ? (((/* implicit */int) min((((/* implicit */short) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_15 [i_4] [i_4 + 1] [i_4]))))), (min(((short)-21476), (((/* implicit */short) (_Bool)1))))))) : (((/* implicit */int) (unsigned short)23887)));
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)13)) ? (7718671667802236558ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)12)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 1264822966)))) : (((((/* implicit */_Bool) arr_18 [i_4] [i_5] [i_5])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)56)))))))) ? (min((((/* implicit */long long int) min((((/* implicit */unsigned short) (signed char)-5)), ((unsigned short)28118)))), (((long long int) (-9223372036854775807LL - 1LL))))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_6] [i_4 - 4])))));
                    }
                } 
            } 
        } 
        arr_21 [i_3] = ((signed char) 504563789623515964ULL);
        var_23 = (-(min((((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (unsigned short)20402)) : (((/* implicit */int) arr_12 [i_3] [i_3] [i_3]))))), (((arr_16 [i_3] [i_3] [i_3] [i_3]) << (((((/* implicit */int) (signed char)-4)) + (35))))))));
    }
}
