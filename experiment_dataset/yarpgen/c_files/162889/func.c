/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162889
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
    var_15 ^= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)182), (((/* implicit */unsigned char) ((3373926063263507316ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)53)))))))))) <= (0U)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_4 [i_0] = ((short) (+((~(((/* implicit */int) (signed char)-53))))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    {
                        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) max(((~(((/* implicit */int) arr_6 [i_2] [i_2 - 1])))), (((((/* implicit */_Bool) (unsigned short)5582)) ? ((+(((/* implicit */int) (signed char)-51)))) : (((/* implicit */int) ((unsigned char) (unsigned short)65516))))))))));
                        arr_14 [i_2] [i_1] [i_2] [i_3] = ((/* implicit */signed char) min((((/* implicit */long long int) var_13)), ((+(-2393974384254561676LL)))));
                        var_17 -= ((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)0)), ((unsigned short)55536)));
                        var_18 -= ((/* implicit */unsigned short) 6342807549079649939LL);
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (long long int i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            arr_17 [i_0] [(_Bool)1] = ((/* implicit */int) ((_Bool) (unsigned short)12166));
            var_19 &= ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)0), (((/* implicit */unsigned char) (signed char)-53)))))) & ((-(4294967293U))))));
        }
        /* vectorizable */
        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 1) 
        {
            var_20 = ((/* implicit */unsigned short) ((unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)198)))));
            arr_21 [i_0] = ((/* implicit */unsigned short) ((int) arr_10 [i_0] [i_0] [i_0] [i_0]));
            arr_22 [i_0] [i_0] = ((/* implicit */short) 4294967293U);
            /* LoopSeq 1 */
            for (short i_6 = 1; i_6 < 9; i_6 += 4) 
            {
                arr_25 [i_6] = ((/* implicit */unsigned short) var_13);
                var_21 ^= ((/* implicit */short) (+(arr_13 [i_5] [i_6 - 1] [8ULL] [i_6] [i_6 - 1])));
            }
        }
        /* LoopNest 2 */
        for (unsigned short i_7 = 4; i_7 < 9; i_7 += 3) 
        {
            for (unsigned int i_8 = 2; i_8 < 11; i_8 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((unsigned int) max((((/* implicit */short) (signed char)-63)), (arr_9 [i_8 - 2] [(_Bool)1] [i_8 - 2] [i_7 - 2]))))));
                    var_23 = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) 481814439)) || (((/* implicit */_Bool) (unsigned char)198))))), ((~(((/* implicit */int) (signed char)-63))))));
                }
            } 
        } 
    }
    for (signed char i_9 = 3; i_9 < 20; i_9 += 3) 
    {
        arr_34 [i_9] = ((/* implicit */int) min((((/* implicit */long long int) ((unsigned int) ((short) 0U)))), (((((/* implicit */long long int) 4294967272U)) / (79934694036148276LL)))));
        var_24 = ((/* implicit */unsigned short) ((signed char) min(((unsigned short)45147), (((/* implicit */unsigned short) ((unsigned char) (_Bool)1))))));
    }
    var_25 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)97)) ? (((/* implicit */int) (unsigned short)5582)) : ((-(((/* implicit */int) (_Bool)1))))))), ((~(8044516829260547238ULL))));
    var_26 = ((/* implicit */unsigned long long int) ((short) var_4));
}
